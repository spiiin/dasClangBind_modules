#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "assimp.h"

#include "need_assimp.h"

namespace das {

const char* das_aiString_to_string(aiString* string) {
	return string->data;
}

void Module_assimp::initMain() {
	addExtern<DAS_BIND_FUN(das_aiString_to_string)>(*this, lib, "assimp_str",
		SideEffects::worstDefault, "das_aiString_to_string");
}

ModuleAotType Module_assimp::aotRequire(TextWriter& /*tw*/) const {
	return ModuleAotType::no_aot;
}

//void Module_assimp::initAotAlias() {
//}

}