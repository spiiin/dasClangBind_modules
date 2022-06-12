#include "daScript/daScript.h"
#include "../modules/dasAssimp/src/assimp.h"
#include <iostream>

using namespace das;

#define TUTORIAL_NAME   "/examples/tutorial/tutorial01-assimp.das"

void tutorial () {
    TextPrinter tout;                               // output stream for all compiler messages (stdout. for stringstream use TextWriter)
    ModuleGroup dummyLibGroup;                      // module group for compiled program
    auto fAccess = make_smart<FsFileAccess>();      // default file access
    // compile program
    auto program = compileDaScript(getDasRoot() + TUTORIAL_NAME, fAccess, tout, dummyLibGroup);
    if ( program->failed() ) {
        // if compilation failed, report errors
        tout << "failed to compile\n";
        for ( auto & err : program->errors ) {
            tout << reportError(err.at, err.what, err.extra, err.fixme, err.cerr );
        }
        return;
    }
    // create daScript context
    Context ctx(program->getContextStackSize());
    if ( !program->simulate(ctx, tout) ) {
        // if interpretation failed, report errors
        tout << "failed to simulate\n";
        for ( auto & err : program->errors ) {
            tout << reportError(err.at, err.what, err.extra, err.fixme, err.cerr );
        }
        return;
    }

    auto fnTest = ctx.findFunction("main");
    if ( !fnTest ) {
        tout << "function 'main' not found\n";
        return;
    }

    ctx.eval(fnTest, nullptr);
    if ( auto ex = ctx.getException() ) {
        tout << "exception: " << ex << "\n";
        return;
    }
}

int main( int, char * [] ) {
    NEED_ALL_DEFAULT_MODULES;
    NEED_MODULE(Module_assimp);
    Module::Initialize();
    char a = 'x';
    while (a != 'z') {
        tutorial();
        std::cin >> a;
    }
    Module::Shutdown();
    return 0;
}
