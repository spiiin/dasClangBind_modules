require cbind/cbind_boost
require daslib/safe_addr
require daslib/strings
require daslib/defer
require daslib/fio


class AssimpGen : CppGenBind
    override func_to_stdout = false
    unique_functions : table<string; bool>

    def AssimpGen
        bind_root = "{get_das_root()}/modules/dasAssimp/src"
        bind_module = "assimp"
        bind_das_module = "assimp"
        let pfn = "assimp/include_all_import.h"
        let pfp = "{get_das_root()}/modules/dasAssimp/assimp/include_c/"

        let args <- [{string
            "-xc++-header";
            "-std=c++1z";
            "-I{get_full_file_name(pfp)}";
            "-DSWIG"
        }]

        func_per_chunk = 20
        init_args(pfn,pfp,args)
        setDefaultFiles()
        //init_skip_func()
        openAllFiles()


    def override namespace_name(name:string; dash:string="::") : string
        return AnyGenBind`namespace_name(self, name, dash)

    def override skip_struct(name : string)
        return false
        //return AnyGenBind`skip_struct(name)

    def override skip_anyFunction(var c : CXCursor; isMethod:bool) : bool
        let funcname = string(clang_getCursorSpelling(c))
        if unique_functions |> find(funcname) != null
            return true
        else
            unique_functions[funcname] = true
            return AnyGenBind`skip_anyFunction(self, c, isMethod)


    def override skip_file(fname:string) : bool
        if fname|>find("include_c") != -1
            return false
        return ! fname |> ends_with(PARSE_FILE_NAME)

    def override generateModuleHPrefix
        module_h_file |> fwrite("#include \"need_assimp.h\"\n")


[export]
def main
    var cgb = new AssimpGen()
    defer <|
        unsafe
            delete cgb
    cgb->generate()
    cgb->genCMakeDecl("DAS_ASSIMP_BIND")