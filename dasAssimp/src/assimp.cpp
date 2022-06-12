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
#include "assimp.struct.impl.inc"
namespace das {
#include "assimp.enum.class.inc"
#include "assimp.struct.class.inc"
#include "assimp.func.aot.inc"
Module_assimp::Module_assimp() : Module("assimp") {
}
bool Module_assimp::initDependencies() {
	if ( initialized ) return true;
	initialized = true;
	lib.addModule(this);
	lib.addBuiltInModule();
	#include "assimp.enum.add.inc"
	#include "assimp.dummy.add.inc"
	#include "assimp.struct.add.inc"
	#include "assimp.struct.postadd.inc"
	#include "assimp.alias.add.inc"
	#include "assimp.func.reg.inc"
	initMain();
	return true;
}
}
REGISTER_MODULE_IN_NAMESPACE(Module_assimp,das);

