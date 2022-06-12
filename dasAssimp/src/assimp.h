// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

#pragma once
#include "need_assimp.h"
namespace das {
class Module_assimp : public Module {
public:
	Module_assimp();
protected:
virtual bool initDependencies() override;
	void initMain ();
	virtual ModuleAotType aotRequire ( TextWriter & tw ) const override;
	#include "assimp.func.decl.inc"
public:
	ModuleLibrary lib;
	bool initialized = false;
};
}

