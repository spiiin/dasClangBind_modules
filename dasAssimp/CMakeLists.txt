IF ((NOT DAS_ASSIMP_INCLUDED) AND ((NOT ${DAS_ASSIMP_DISABLED}) OR (NOT DEFINED DAS_ASSIMP_DISABLED)))
  SET(DAS_ASSIMP_INCLUDED TRUE)
  MESSAGE(STATUS "dasAssimp module included.")

  IF (NOT DEFINED DAS_ASSIMP_BIND_DIR)
    SET(DAS_ASSIMP_BIND_DIR ${PROJECT_SOURCE_DIR}/modules/dasAssimp)
  ENDIF()

  LIST(APPEND CMAKE_MODULE_PATH ${DAS_ASSIMP_BIND_DIR})

  set(ASSIMP_SOURCE_DIR ${DAS_ASSIMP_BIND_DIR}/assimp)
  add_subdirectory(${DAS_ASSIMP_BIND_DIR}/assimp)

	# libDasModuleAssimp
	SET(DAS_ASSIMP_BIND_MODULE_SRC
			${DAS_ASSIMP_BIND_DIR}/src/need_assimp.h
			${DAS_ASSIMP_BIND_DIR}/src/assimp.h
			${DAS_ASSIMP_BIND_DIR}/src/assimp.cpp
	# user include
			${DAS_ASSIMP_BIND_DIR}/src/assimp.main.cpp
	# generated binding includes
			${DAS_ASSIMP_BIND_DIR}/src/assimp.alias.add.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.dummy.add.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.enum.add.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.enum.class.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.enum.decl.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.enum.decl.cast.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.struct.add.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.struct.postadd.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.struct.class.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.struct.decl.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.struct.impl.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.struct.cast.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.func.reg.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.func.decl.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.func.aot.inc
			${DAS_ASSIMP_BIND_DIR}/src/assimp.func.aot.decl.inc
	# generated functions
			${DAS_ASSIMP_BIND_DIR}/src/assimp.func_1.cpp
			${DAS_ASSIMP_BIND_DIR}/src/assimp.func_2.cpp
			${DAS_ASSIMP_BIND_DIR}/src/assimp.func_3.cpp
	)

	ADD_MODULE_LIB(libDasModuleAssimp)
	ADD_MODULE_CPP(assimp)
	ADD_LIBRARY(libDasModuleAssimp ${DAS_ASSIMP_BIND_MODULE_SRC})
	TARGET_LINK_LIBRARIES(libDasModuleAssimp
    assimp
  )
	ADD_DEPENDENCIES(libDasModuleAssimp assimp)
	TARGET_INCLUDE_DIRECTORIES(libDasModuleAssimp PUBLIC
		${ASSIMP_SOURCE_DIR}/include
  )
	SETUP_CPP11(libDasModuleAssimp)

ENDIF()