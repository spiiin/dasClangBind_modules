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
void Module_assimp::initFunctions_2() {
	addExtern< void (*)(aiPropertyStore *,const char *,float) , aiSetImportPropertyFloat >(*this,lib,"aiSetImportPropertyFloat",SideEffects::worstDefault,"aiSetImportPropertyFloat")
		->args({"store","szName","value"});
	addExtern< void (*)(aiPropertyStore *,const char *,const aiString *) , aiSetImportPropertyString >(*this,lib,"aiSetImportPropertyString",SideEffects::worstDefault,"aiSetImportPropertyString")
		->args({"store","szName","st"});
	addExtern< void (*)(aiPropertyStore *,const char *,const aiMatrix4x4 *) , aiSetImportPropertyMatrix >(*this,lib,"aiSetImportPropertyMatrix",SideEffects::worstDefault,"aiSetImportPropertyMatrix")
		->args({"store","szName","mat"});
	addExtern< void (*)(aiQuaternion *,const aiMatrix3x3 *) , aiCreateQuaternionFromMatrix >(*this,lib,"aiCreateQuaternionFromMatrix",SideEffects::worstDefault,"aiCreateQuaternionFromMatrix")
		->args({"quat","mat"});
	addExtern< void (*)(const aiMatrix4x4 *,aiVector3D *,aiQuaternion *,aiVector3D *) , aiDecomposeMatrix >(*this,lib,"aiDecomposeMatrix",SideEffects::worstDefault,"aiDecomposeMatrix")
		->args({"mat","scaling","rotation","position"});
	addExtern< void (*)(aiMatrix4x4 *) , aiTransposeMatrix4 >(*this,lib,"aiTransposeMatrix4",SideEffects::worstDefault,"aiTransposeMatrix4")
		->args({"mat"});
	addExtern< void (*)(aiMatrix3x3 *) , aiTransposeMatrix3 >(*this,lib,"aiTransposeMatrix3",SideEffects::worstDefault,"aiTransposeMatrix3")
		->args({"mat"});
	addExtern< void (*)(aiVector3D *,const aiMatrix3x3 *) , aiTransformVecByMatrix3 >(*this,lib,"aiTransformVecByMatrix3",SideEffects::worstDefault,"aiTransformVecByMatrix3")
		->args({"vec","mat"});
	addExtern< void (*)(aiVector3D *,const aiMatrix4x4 *) , aiTransformVecByMatrix4 >(*this,lib,"aiTransformVecByMatrix4",SideEffects::worstDefault,"aiTransformVecByMatrix4")
		->args({"vec","mat"});
	addExtern< void (*)(aiMatrix4x4 *,const aiMatrix4x4 *) , aiMultiplyMatrix4 >(*this,lib,"aiMultiplyMatrix4",SideEffects::worstDefault,"aiMultiplyMatrix4")
		->args({"dst","src"});
	addExtern< void (*)(aiMatrix3x3 *,const aiMatrix3x3 *) , aiMultiplyMatrix3 >(*this,lib,"aiMultiplyMatrix3",SideEffects::worstDefault,"aiMultiplyMatrix3")
		->args({"dst","src"});
	addExtern< void (*)(aiMatrix3x3 *) , aiIdentityMatrix3 >(*this,lib,"aiIdentityMatrix3",SideEffects::worstDefault,"aiIdentityMatrix3")
		->args({"mat"});
	addExtern< void (*)(aiMatrix4x4 *) , aiIdentityMatrix4 >(*this,lib,"aiIdentityMatrix4",SideEffects::worstDefault,"aiIdentityMatrix4")
		->args({"mat"});
	addExtern< size_t (*)() , aiGetImportFormatCount >(*this,lib,"aiGetImportFormatCount",SideEffects::worstDefault,"aiGetImportFormatCount");
	addExtern< const aiImporterDesc * (*)(size_t) , aiGetImportFormatDescription >(*this,lib,"aiGetImportFormatDescription",SideEffects::worstDefault,"aiGetImportFormatDescription")
		->args({"pIndex"});
	addExtern< aiReturn (*)(const aiMaterial *,const char *,unsigned int,unsigned int,const aiMaterialProperty **) , aiGetMaterialProperty >(*this,lib,"aiGetMaterialProperty",SideEffects::worstDefault,"aiGetMaterialProperty")
		->args({"pMat","pKey","type","index","pPropOut"});
	addExtern< aiReturn (*)(const aiMaterial *,const char *,unsigned int,unsigned int,float *,unsigned int *) , aiGetMaterialFloatArray >(*this,lib,"aiGetMaterialFloatArray",SideEffects::worstDefault,"aiGetMaterialFloatArray")
		->args({"pMat","pKey","type","index","pOut","pMax"});
	addExtern< aiReturn (*)(const aiMaterial *,const char *,unsigned int,unsigned int,int *,unsigned int *) , aiGetMaterialIntegerArray >(*this,lib,"aiGetMaterialIntegerArray",SideEffects::worstDefault,"aiGetMaterialIntegerArray")
		->args({"pMat","pKey","type","index","pOut","pMax"});
	addExtern< aiReturn (*)(const aiMaterial *,const char *,unsigned int,unsigned int,aiColor4D *) , aiGetMaterialColor >(*this,lib,"aiGetMaterialColor",SideEffects::worstDefault,"aiGetMaterialColor")
		->args({"pMat","pKey","type","index","pOut"});
	addExtern< aiReturn (*)(const aiMaterial *,const char *,unsigned int,unsigned int,aiUVTransform *) , aiGetMaterialUVTransform >(*this,lib,"aiGetMaterialUVTransform",SideEffects::worstDefault,"aiGetMaterialUVTransform")
		->args({"pMat","pKey","type","index","pOut"});
}
}

