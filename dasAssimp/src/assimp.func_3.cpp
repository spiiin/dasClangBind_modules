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
void Module_assimp::initFunctions_3() {
	addExtern< aiReturn (*)(const aiMaterial *,const char *,unsigned int,unsigned int,aiString *) , aiGetMaterialString >(*this,lib,"aiGetMaterialString",SideEffects::worstDefault,"aiGetMaterialString")
		->args({"pMat","pKey","type","index","pOut"});
	addExtern< unsigned int (*)(const aiMaterial *,aiTextureType) , aiGetMaterialTextureCount >(*this,lib,"aiGetMaterialTextureCount",SideEffects::worstDefault,"aiGetMaterialTextureCount")
		->args({"pMat","type"});
	addExtern< aiReturn (*)(const aiMaterial *,aiTextureType,unsigned int,aiString *,aiTextureMapping *,unsigned int *,float *,aiTextureOp *,aiTextureMapMode *,unsigned int *) , aiGetMaterialTexture >(*this,lib,"aiGetMaterialTexture",SideEffects::worstDefault,"aiGetMaterialTexture")
		->args({"mat","type","index","path","mapping","uvindex","blend","op","mapmode","flags"});
}
}

