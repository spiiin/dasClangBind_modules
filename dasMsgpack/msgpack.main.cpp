#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/ast/ast_typefactory_bind.h"
#include "daScript/simulate/bind_enum.h"
#include "msgpack.h"

#include "need_msgpack.h"

namespace das {
void das_msgpack_packer_init(msgpack_packer* pk, void* data) {
	msgpack_packer_init(pk, data, msgpack_sbuffer_write);
}

void das_msgpack_object_print(msgpack_object* o) {
	msgpack_object_print(stdout, *o);
}

void das_msgpack_pack_str_body(msgpack_packer* pk, const char* b, size_t l) {
	msgpack_pack_str_body(pk, b, l);
}

void Module_msgpack::initMain() {
	addExtern<DAS_BIND_FUN(das_msgpack_packer_init)>(*this,lib,"msgpack_packer_init",
            SideEffects::worstDefault,"das_msgpack_packer_init");
	addExtern<DAS_BIND_FUN(das_msgpack_object_print)>(*this, lib, "msgpack_object_print",
		SideEffects::worstDefault, "das_msgpack_object_print");
	addExtern<DAS_BIND_FUN(das_msgpack_pack_str_body)>(*this, lib, "msgpack_pack_str_body",
		SideEffects::worstDefault, "das_msgpack_pack_str_body");
}

ModuleAotType Module_msgpack::aotRequire(TextWriter& /*tw*/) const {
	return ModuleAotType::no_aot;
}

//void Module_assimp::initAotAlias() {
//}

}