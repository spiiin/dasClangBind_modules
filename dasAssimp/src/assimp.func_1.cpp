// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "assimp.h"
#include "need_assimp.h"
namespace das {
#include "assimp.func.aot.decl.inc"
void Module_assimp::initFunctions_1() {
	//addExtern< const aiImporterDesc * (*)(const char *) , aiGetImporterDesc >(*this,lib,"aiGetImporterDesc",SideEffects::worstDefault,"aiGetImporterDesc")
	//	->args({"extension"});
	addExtern< const aiScene * (*)(const char *,unsigned int) , aiImportFile >(*this,lib,"aiImportFile",SideEffects::worstDefault,"aiImportFile")
		->args({"pFile","pFlags"});
	addExtern< const aiScene * (*)(const char *,unsigned int,aiFileIO *) , aiImportFileEx >(*this,lib,"aiImportFileEx",SideEffects::worstDefault,"aiImportFileEx")
		->args({"pFile","pFlags","pFS"});
	addExtern< const aiScene * (*)(const char *,unsigned int,aiFileIO *,const aiPropertyStore *) , aiImportFileExWithProperties >(*this,lib,"aiImportFileExWithProperties",SideEffects::worstDefault,"aiImportFileExWithProperties")
		->args({"pFile","pFlags","pFS","pProps"});
	addExtern< const aiScene * (*)(const char *,unsigned int,unsigned int,const char *) , aiImportFileFromMemory >(*this,lib,"aiImportFileFromMemory",SideEffects::worstDefault,"aiImportFileFromMemory")
		->args({"pBuffer","pLength","pFlags","pHint"});
	addExtern< const aiScene * (*)(const char *,unsigned int,unsigned int,const char *,const aiPropertyStore *) , aiImportFileFromMemoryWithProperties >(*this,lib,"aiImportFileFromMemoryWithProperties",SideEffects::worstDefault,"aiImportFileFromMemoryWithProperties")
		->args({"pBuffer","pLength","pFlags","pHint","pProps"});
	addExtern< const aiScene * (*)(const aiScene *,unsigned int) , aiApplyPostProcessing >(*this,lib,"aiApplyPostProcessing",SideEffects::worstDefault,"aiApplyPostProcessing")
		->args({"pScene","pFlags"});
	addExtern< aiLogStream (*)(aiDefaultLogStream,const char *) , aiGetPredefinedLogStream ,SimNode_ExtFuncCallAndCopyOrMove>(*this,lib,"aiGetPredefinedLogStream",SideEffects::worstDefault,"aiGetPredefinedLogStream")
		->args({"pStreams","file"});
	addExtern< void (*)(const aiLogStream *) , aiAttachLogStream >(*this,lib,"aiAttachLogStream",SideEffects::worstDefault,"aiAttachLogStream")
		->args({"stream"});
	addExtern< void (*)(int) , aiEnableVerboseLogging >(*this,lib,"aiEnableVerboseLogging",SideEffects::worstDefault,"aiEnableVerboseLogging")
		->args({"d"});
	addExtern< aiReturn (*)(const aiLogStream *) , aiDetachLogStream >(*this,lib,"aiDetachLogStream",SideEffects::worstDefault,"aiDetachLogStream")
		->args({"stream"});
	addExtern< void (*)() , aiDetachAllLogStreams >(*this,lib,"aiDetachAllLogStreams",SideEffects::worstDefault,"aiDetachAllLogStreams");
	addExtern< void (*)(const aiScene *) , aiReleaseImport >(*this,lib,"aiReleaseImport",SideEffects::worstDefault,"aiReleaseImport")
		->args({"pScene"});
	addExtern< const char * (*)() , aiGetErrorString >(*this,lib,"aiGetErrorString",SideEffects::worstDefault,"aiGetErrorString");
	addExtern< int (*)(const char *) , aiIsExtensionSupported >(*this,lib,"aiIsExtensionSupported",SideEffects::worstDefault,"aiIsExtensionSupported")
		->args({"szExtension"});
	addExtern< void (*)(aiString *) , aiGetExtensionList >(*this,lib,"aiGetExtensionList",SideEffects::worstDefault,"aiGetExtensionList")
		->args({"szOut"});
	addExtern< void (*)(const aiScene *,aiMemoryInfo *) , aiGetMemoryRequirements >(*this,lib,"aiGetMemoryRequirements",SideEffects::worstDefault,"aiGetMemoryRequirements")
		->args({"pIn","in"});
	addExtern< aiPropertyStore * (*)() , aiCreatePropertyStore >(*this,lib,"aiCreatePropertyStore",SideEffects::worstDefault,"aiCreatePropertyStore");
	addExtern< void (*)(aiPropertyStore *) , aiReleasePropertyStore >(*this,lib,"aiReleasePropertyStore",SideEffects::worstDefault,"aiReleasePropertyStore")
		->args({"p"});
	addExtern< void (*)(aiPropertyStore *,const char *,int) , aiSetImportPropertyInteger >(*this,lib,"aiSetImportPropertyInteger",SideEffects::worstDefault,"aiSetImportPropertyInteger")
		->args({"store","szName","value"});
}
}

