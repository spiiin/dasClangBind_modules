// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

class Enumeration_aiComponent : public das::Enumeration {
public:
	Enumeration_aiComponent() : das::Enumeration("aiComponent") {
		external = true;
		cppName = "aiComponent";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NORMALS", "aiComponent_NORMALS", int64_t(aiComponent::aiComponent_NORMALS), das::LineInfo());
		addIEx("TANGENTS_AND_BITANGENTS", "aiComponent_TANGENTS_AND_BITANGENTS", int64_t(aiComponent::aiComponent_TANGENTS_AND_BITANGENTS), das::LineInfo());
		addIEx("COLORS", "aiComponent_COLORS", int64_t(aiComponent::aiComponent_COLORS), das::LineInfo());
		addIEx("TEXCOORDS", "aiComponent_TEXCOORDS", int64_t(aiComponent::aiComponent_TEXCOORDS), das::LineInfo());
		addIEx("BONEWEIGHTS", "aiComponent_BONEWEIGHTS", int64_t(aiComponent::aiComponent_BONEWEIGHTS), das::LineInfo());
		addIEx("ANIMATIONS", "aiComponent_ANIMATIONS", int64_t(aiComponent::aiComponent_ANIMATIONS), das::LineInfo());
		addIEx("TEXTURES", "aiComponent_TEXTURES", int64_t(aiComponent::aiComponent_TEXTURES), das::LineInfo());
		addIEx("LIGHTS", "aiComponent_LIGHTS", int64_t(aiComponent::aiComponent_LIGHTS), das::LineInfo());
		addIEx("CAMERAS", "aiComponent_CAMERAS", int64_t(aiComponent::aiComponent_CAMERAS), das::LineInfo());
		addIEx("MESHES", "aiComponent_MESHES", int64_t(aiComponent::aiComponent_MESHES), das::LineInfo());
		addIEx("MATERIALS", "aiComponent_MATERIALS", int64_t(aiComponent::aiComponent_MATERIALS), das::LineInfo());
	}
};

class Enumeration_aiReturn : public das::Enumeration {
public:
	Enumeration_aiReturn() : das::Enumeration("aiReturn") {
		external = true;
		cppName = "aiReturn";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("SUCCESS", "aiReturn_SUCCESS", int64_t(aiReturn::aiReturn_SUCCESS), das::LineInfo());
		addIEx("FAILURE", "aiReturn_FAILURE", int64_t(aiReturn::aiReturn_FAILURE), das::LineInfo());
		addIEx("OUTOFMEMORY", "aiReturn_OUTOFMEMORY", int64_t(aiReturn::aiReturn_OUTOFMEMORY), das::LineInfo());
		addIEx("_AI_ENFORCE_ENUM_SIZE", "_AI_ENFORCE_ENUM_SIZE", int64_t(aiReturn::_AI_ENFORCE_ENUM_SIZE), das::LineInfo());
	}
};

class Enumeration_aiOrigin : public das::Enumeration {
public:
	Enumeration_aiOrigin() : das::Enumeration("aiOrigin") {
		external = true;
		cppName = "aiOrigin";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("SET", "aiOrigin_SET", int64_t(aiOrigin::aiOrigin_SET), das::LineInfo());
		addIEx("CUR", "aiOrigin_CUR", int64_t(aiOrigin::aiOrigin_CUR), das::LineInfo());
		addIEx("END", "aiOrigin_END", int64_t(aiOrigin::aiOrigin_END), das::LineInfo());
		addIEx("_AI_ORIGIN_ENFORCE_ENUM_SIZE", "_AI_ORIGIN_ENFORCE_ENUM_SIZE", int64_t(aiOrigin::_AI_ORIGIN_ENFORCE_ENUM_SIZE), das::LineInfo());
	}
};

class Enumeration_aiDefaultLogStream : public das::Enumeration {
public:
	Enumeration_aiDefaultLogStream() : das::Enumeration("aiDefaultLogStream") {
		external = true;
		cppName = "aiDefaultLogStream";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("FILE", "aiDefaultLogStream_FILE", int64_t(aiDefaultLogStream::aiDefaultLogStream_FILE), das::LineInfo());
		addIEx("STDOUT", "aiDefaultLogStream_STDOUT", int64_t(aiDefaultLogStream::aiDefaultLogStream_STDOUT), das::LineInfo());
		addIEx("STDERR", "aiDefaultLogStream_STDERR", int64_t(aiDefaultLogStream::aiDefaultLogStream_STDERR), das::LineInfo());
		addIEx("DEBUGGER", "aiDefaultLogStream_DEBUGGER", int64_t(aiDefaultLogStream::aiDefaultLogStream_DEBUGGER), das::LineInfo());
		addIEx("_AI_DLS_ENFORCE_ENUM_SIZE", "_AI_DLS_ENFORCE_ENUM_SIZE", int64_t(aiDefaultLogStream::_AI_DLS_ENFORCE_ENUM_SIZE), das::LineInfo());
	}
};

class Enumeration_aiImporterFlags : public das::Enumeration {
public:
	Enumeration_aiImporterFlags() : das::Enumeration("aiImporterFlags") {
		external = true;
		cppName = "aiImporterFlags";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("SupportTextFlavour", "aiImporterFlags_SupportTextFlavour", int64_t(aiImporterFlags::aiImporterFlags_SupportTextFlavour), das::LineInfo());
		addIEx("SupportBinaryFlavour", "aiImporterFlags_SupportBinaryFlavour", int64_t(aiImporterFlags::aiImporterFlags_SupportBinaryFlavour), das::LineInfo());
		addIEx("SupportCompressedFlavour", "aiImporterFlags_SupportCompressedFlavour", int64_t(aiImporterFlags::aiImporterFlags_SupportCompressedFlavour), das::LineInfo());
		addIEx("LimitedSupport", "aiImporterFlags_LimitedSupport", int64_t(aiImporterFlags::aiImporterFlags_LimitedSupport), das::LineInfo());
		addIEx("Experimental", "aiImporterFlags_Experimental", int64_t(aiImporterFlags::aiImporterFlags_Experimental), das::LineInfo());
	}
};

class Enumeration_aiPrimitiveType : public das::Enumeration {
public:
	Enumeration_aiPrimitiveType() : das::Enumeration("aiPrimitiveType") {
		external = true;
		cppName = "aiPrimitiveType";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("POINT", "aiPrimitiveType_POINT", int64_t(aiPrimitiveType::aiPrimitiveType_POINT), das::LineInfo());
		addIEx("LINE", "aiPrimitiveType_LINE", int64_t(aiPrimitiveType::aiPrimitiveType_LINE), das::LineInfo());
		addIEx("TRIANGLE", "aiPrimitiveType_TRIANGLE", int64_t(aiPrimitiveType::aiPrimitiveType_TRIANGLE), das::LineInfo());
		addIEx("POLYGON", "aiPrimitiveType_POLYGON", int64_t(aiPrimitiveType::aiPrimitiveType_POLYGON), das::LineInfo());
	}
};

class Enumeration_aiMorphingMethod : public das::Enumeration {
public:
	Enumeration_aiMorphingMethod() : das::Enumeration("aiMorphingMethod") {
		external = true;
		cppName = "aiMorphingMethod";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("VERTEX_BLEND", "aiMorphingMethod_VERTEX_BLEND", int64_t(aiMorphingMethod::aiMorphingMethod_VERTEX_BLEND), das::LineInfo());
		addIEx("MORPH_NORMALIZED", "aiMorphingMethod_MORPH_NORMALIZED", int64_t(aiMorphingMethod::aiMorphingMethod_MORPH_NORMALIZED), das::LineInfo());
		addIEx("MORPH_RELATIVE", "aiMorphingMethod_MORPH_RELATIVE", int64_t(aiMorphingMethod::aiMorphingMethod_MORPH_RELATIVE), das::LineInfo());
	}
};

class Enumeration_aiLightSourceType : public das::Enumeration {
public:
	Enumeration_aiLightSourceType() : das::Enumeration("aiLightSourceType") {
		external = true;
		cppName = "aiLightSourceType";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("aiLightSource_UNDEFINED", "aiLightSource_UNDEFINED", int64_t(aiLightSourceType::aiLightSource_UNDEFINED), das::LineInfo());
		addIEx("aiLightSource_DIRECTIONAL", "aiLightSource_DIRECTIONAL", int64_t(aiLightSourceType::aiLightSource_DIRECTIONAL), das::LineInfo());
		addIEx("aiLightSource_POINT", "aiLightSource_POINT", int64_t(aiLightSourceType::aiLightSource_POINT), das::LineInfo());
		addIEx("aiLightSource_SPOT", "aiLightSource_SPOT", int64_t(aiLightSourceType::aiLightSource_SPOT), das::LineInfo());
		addIEx("aiLightSource_AMBIENT", "aiLightSource_AMBIENT", int64_t(aiLightSourceType::aiLightSource_AMBIENT), das::LineInfo());
		addIEx("aiLightSource_AREA", "aiLightSource_AREA", int64_t(aiLightSourceType::aiLightSource_AREA), das::LineInfo());
	}
};

class Enumeration_aiTextureOp : public das::Enumeration {
public:
	Enumeration_aiTextureOp() : das::Enumeration("aiTextureOp") {
		external = true;
		cppName = "aiTextureOp";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("Multiply", "aiTextureOp_Multiply", int64_t(aiTextureOp::aiTextureOp_Multiply), das::LineInfo());
		addIEx("Add", "aiTextureOp_Add", int64_t(aiTextureOp::aiTextureOp_Add), das::LineInfo());
		addIEx("Subtract", "aiTextureOp_Subtract", int64_t(aiTextureOp::aiTextureOp_Subtract), das::LineInfo());
		addIEx("Divide", "aiTextureOp_Divide", int64_t(aiTextureOp::aiTextureOp_Divide), das::LineInfo());
		addIEx("SmoothAdd", "aiTextureOp_SmoothAdd", int64_t(aiTextureOp::aiTextureOp_SmoothAdd), das::LineInfo());
		addIEx("SignedAdd", "aiTextureOp_SignedAdd", int64_t(aiTextureOp::aiTextureOp_SignedAdd), das::LineInfo());
	}
};

class Enumeration_aiTextureMapMode : public das::Enumeration {
public:
	Enumeration_aiTextureMapMode() : das::Enumeration("aiTextureMapMode") {
		external = true;
		cppName = "aiTextureMapMode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("Wrap", "aiTextureMapMode_Wrap", int64_t(aiTextureMapMode::aiTextureMapMode_Wrap), das::LineInfo());
		addIEx("Clamp", "aiTextureMapMode_Clamp", int64_t(aiTextureMapMode::aiTextureMapMode_Clamp), das::LineInfo());
		addIEx("Decal", "aiTextureMapMode_Decal", int64_t(aiTextureMapMode::aiTextureMapMode_Decal), das::LineInfo());
		addIEx("Mirror", "aiTextureMapMode_Mirror", int64_t(aiTextureMapMode::aiTextureMapMode_Mirror), das::LineInfo());
	}
};

class Enumeration_aiTextureMapping : public das::Enumeration {
public:
	Enumeration_aiTextureMapping() : das::Enumeration("aiTextureMapping") {
		external = true;
		cppName = "aiTextureMapping";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("UV", "aiTextureMapping_UV", int64_t(aiTextureMapping::aiTextureMapping_UV), das::LineInfo());
		addIEx("SPHERE", "aiTextureMapping_SPHERE", int64_t(aiTextureMapping::aiTextureMapping_SPHERE), das::LineInfo());
		addIEx("CYLINDER", "aiTextureMapping_CYLINDER", int64_t(aiTextureMapping::aiTextureMapping_CYLINDER), das::LineInfo());
		addIEx("BOX", "aiTextureMapping_BOX", int64_t(aiTextureMapping::aiTextureMapping_BOX), das::LineInfo());
		addIEx("PLANE", "aiTextureMapping_PLANE", int64_t(aiTextureMapping::aiTextureMapping_PLANE), das::LineInfo());
		addIEx("OTHER", "aiTextureMapping_OTHER", int64_t(aiTextureMapping::aiTextureMapping_OTHER), das::LineInfo());
	}
};

class Enumeration_aiTextureType : public das::Enumeration {
public:
	Enumeration_aiTextureType() : das::Enumeration("aiTextureType") {
		external = true;
		cppName = "aiTextureType";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NONE", "aiTextureType_NONE", int64_t(aiTextureType::aiTextureType_NONE), das::LineInfo());
		addIEx("DIFFUSE", "aiTextureType_DIFFUSE", int64_t(aiTextureType::aiTextureType_DIFFUSE), das::LineInfo());
		addIEx("SPECULAR", "aiTextureType_SPECULAR", int64_t(aiTextureType::aiTextureType_SPECULAR), das::LineInfo());
		addIEx("AMBIENT", "aiTextureType_AMBIENT", int64_t(aiTextureType::aiTextureType_AMBIENT), das::LineInfo());
		addIEx("EMISSIVE", "aiTextureType_EMISSIVE", int64_t(aiTextureType::aiTextureType_EMISSIVE), das::LineInfo());
		addIEx("HEIGHT", "aiTextureType_HEIGHT", int64_t(aiTextureType::aiTextureType_HEIGHT), das::LineInfo());
		addIEx("NORMALS", "aiTextureType_NORMALS", int64_t(aiTextureType::aiTextureType_NORMALS), das::LineInfo());
		addIEx("SHININESS", "aiTextureType_SHININESS", int64_t(aiTextureType::aiTextureType_SHININESS), das::LineInfo());
		addIEx("OPACITY", "aiTextureType_OPACITY", int64_t(aiTextureType::aiTextureType_OPACITY), das::LineInfo());
		addIEx("DISPLACEMENT", "aiTextureType_DISPLACEMENT", int64_t(aiTextureType::aiTextureType_DISPLACEMENT), das::LineInfo());
		addIEx("LIGHTMAP", "aiTextureType_LIGHTMAP", int64_t(aiTextureType::aiTextureType_LIGHTMAP), das::LineInfo());
		addIEx("REFLECTION", "aiTextureType_REFLECTION", int64_t(aiTextureType::aiTextureType_REFLECTION), das::LineInfo());
		addIEx("UNKNOWN", "aiTextureType_UNKNOWN", int64_t(aiTextureType::aiTextureType_UNKNOWN), das::LineInfo());
	}
};

class Enumeration_aiShadingMode : public das::Enumeration {
public:
	Enumeration_aiShadingMode() : das::Enumeration("aiShadingMode") {
		external = true;
		cppName = "aiShadingMode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("Flat", "aiShadingMode_Flat", int64_t(aiShadingMode::aiShadingMode_Flat), das::LineInfo());
		addIEx("Gouraud", "aiShadingMode_Gouraud", int64_t(aiShadingMode::aiShadingMode_Gouraud), das::LineInfo());
		addIEx("Phong", "aiShadingMode_Phong", int64_t(aiShadingMode::aiShadingMode_Phong), das::LineInfo());
		addIEx("Blinn", "aiShadingMode_Blinn", int64_t(aiShadingMode::aiShadingMode_Blinn), das::LineInfo());
		addIEx("Toon", "aiShadingMode_Toon", int64_t(aiShadingMode::aiShadingMode_Toon), das::LineInfo());
		addIEx("OrenNayar", "aiShadingMode_OrenNayar", int64_t(aiShadingMode::aiShadingMode_OrenNayar), das::LineInfo());
		addIEx("Minnaert", "aiShadingMode_Minnaert", int64_t(aiShadingMode::aiShadingMode_Minnaert), das::LineInfo());
		addIEx("CookTorrance", "aiShadingMode_CookTorrance", int64_t(aiShadingMode::aiShadingMode_CookTorrance), das::LineInfo());
		addIEx("NoShading", "aiShadingMode_NoShading", int64_t(aiShadingMode::aiShadingMode_NoShading), das::LineInfo());
		addIEx("Fresnel", "aiShadingMode_Fresnel", int64_t(aiShadingMode::aiShadingMode_Fresnel), das::LineInfo());
	}
};

class Enumeration_aiTextureFlags : public das::Enumeration {
public:
	Enumeration_aiTextureFlags() : das::Enumeration("aiTextureFlags") {
		external = true;
		cppName = "aiTextureFlags";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("Invert", "aiTextureFlags_Invert", int64_t(aiTextureFlags::aiTextureFlags_Invert), das::LineInfo());
		addIEx("UseAlpha", "aiTextureFlags_UseAlpha", int64_t(aiTextureFlags::aiTextureFlags_UseAlpha), das::LineInfo());
		addIEx("IgnoreAlpha", "aiTextureFlags_IgnoreAlpha", int64_t(aiTextureFlags::aiTextureFlags_IgnoreAlpha), das::LineInfo());
	}
};

class Enumeration_aiBlendMode : public das::Enumeration {
public:
	Enumeration_aiBlendMode() : das::Enumeration("aiBlendMode") {
		external = true;
		cppName = "aiBlendMode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("Default", "aiBlendMode_Default", int64_t(aiBlendMode::aiBlendMode_Default), das::LineInfo());
		addIEx("Additive", "aiBlendMode_Additive", int64_t(aiBlendMode::aiBlendMode_Additive), das::LineInfo());
	}
};

class Enumeration_aiPropertyTypeInfo : public das::Enumeration {
public:
	Enumeration_aiPropertyTypeInfo() : das::Enumeration("aiPropertyTypeInfo") {
		external = true;
		cppName = "aiPropertyTypeInfo";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("aiPTI_Float", "aiPTI_Float", int64_t(aiPropertyTypeInfo::aiPTI_Float), das::LineInfo());
		addIEx("aiPTI_Double", "aiPTI_Double", int64_t(aiPropertyTypeInfo::aiPTI_Double), das::LineInfo());
		addIEx("aiPTI_String", "aiPTI_String", int64_t(aiPropertyTypeInfo::aiPTI_String), das::LineInfo());
		addIEx("aiPTI_Integer", "aiPTI_Integer", int64_t(aiPropertyTypeInfo::aiPTI_Integer), das::LineInfo());
		addIEx("aiPTI_Buffer", "aiPTI_Buffer", int64_t(aiPropertyTypeInfo::aiPTI_Buffer), das::LineInfo());
	}
};

class Enumeration_aiAnimBehaviour : public das::Enumeration {
public:
	Enumeration_aiAnimBehaviour() : das::Enumeration("aiAnimBehaviour") {
		external = true;
		cppName = "aiAnimBehaviour";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("DEFAULT", "aiAnimBehaviour_DEFAULT", int64_t(aiAnimBehaviour::aiAnimBehaviour_DEFAULT), das::LineInfo());
		addIEx("CONSTANT", "aiAnimBehaviour_CONSTANT", int64_t(aiAnimBehaviour::aiAnimBehaviour_CONSTANT), das::LineInfo());
		addIEx("LINEAR", "aiAnimBehaviour_LINEAR", int64_t(aiAnimBehaviour::aiAnimBehaviour_LINEAR), das::LineInfo());
		addIEx("REPEAT", "aiAnimBehaviour_REPEAT", int64_t(aiAnimBehaviour::aiAnimBehaviour_REPEAT), das::LineInfo());
	}
};

class Enumeration_aiMetadataType : public das::Enumeration {
public:
	Enumeration_aiMetadataType() : das::Enumeration("aiMetadataType") {
		external = true;
		cppName = "aiMetadataType";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("AI_BOOL", "AI_BOOL", int64_t(aiMetadataType::AI_BOOL), das::LineInfo());
		addIEx("AI_INT32", "AI_INT32", int64_t(aiMetadataType::AI_INT32), das::LineInfo());
		addIEx("AI_UINT64", "AI_UINT64", int64_t(aiMetadataType::AI_UINT64), das::LineInfo());
		addIEx("AI_FLOAT", "AI_FLOAT", int64_t(aiMetadataType::AI_FLOAT), das::LineInfo());
		addIEx("AI_DOUBLE", "AI_DOUBLE", int64_t(aiMetadataType::AI_DOUBLE), das::LineInfo());
		addIEx("AI_AISTRING", "AI_AISTRING", int64_t(aiMetadataType::AI_AISTRING), das::LineInfo());
		addIEx("AI_AIVECTOR3D", "AI_AIVECTOR3D", int64_t(aiMetadataType::AI_AIVECTOR3D), das::LineInfo());
	}
};

