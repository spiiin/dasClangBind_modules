IF ((NOT DAS_MSGPACK_INCLUDED) AND ((NOT ${DAS_MSGPACK_DISABLED}) OR (NOT DEFINED DAS_MSGPACK_DISABLED)))
  SET(DAS_MSGPACK_INCLUDED TRUE)
  MESSAGE(STATUS "dasMsgpack module included.")

  IF (NOT DEFINED DAS_MSGPACK_BIND_DIR)
    SET(DAS_MSGPACK_BIND_DIR ${PROJECT_SOURCE_DIR}/modules/dasMsgpack)
  ENDIF()

  LIST(APPEND CMAKE_MODULE_PATH ${DAS_MSGPACK_BIND_DIR})

  set(MSGPACK_SOURCE_DIR ${DAS_MSGPACK_BIND_DIR}/msgpack-c)
  add_subdirectory(${DAS_MSGPACK_BIND_DIR}/msgpack-c)

	# libDasModuleMsgpack
 SET(DAS_MSGPACK_BIND_MODULE_SRC
                ${DAS_MSGPACK_BIND_DIR}/src/need_msgpack.h
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.h
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.cpp
        # user include
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.main.cpp
        # generated binding includes
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.alias.add.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.dummy.add.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.enum.add.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.enum.class.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.enum.decl.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.enum.decl.cast.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.struct.add.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.struct.postadd.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.struct.class.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.struct.decl.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.struct.impl.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.struct.cast.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.func.reg.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.func.decl.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.func.aot.inc
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.func.aot.decl.inc
        # generated functions
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.func_1.cpp
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.func_2.cpp
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.func_3.cpp
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.func_4.cpp
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.func_5.cpp
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.func_6.cpp
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.func_7.cpp
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.func_8.cpp
                ${DAS_MSGPACK_BIND_DIR}/src/msgpack.func_9.cpp
        )

	ADD_MODULE_LIB(libDasModuleMsgpack)
	ADD_MODULE_CPP(msgpack-c)
	ADD_LIBRARY(libDasModuleMsgpack ${DAS_MSGPACK_BIND_MODULE_SRC})
	TARGET_LINK_LIBRARIES(libDasModuleMsgpack
		msgpack-c
	)
	#ADD_DEPENDENCIES(libDasModuleMsgpack msgpack-c)
	TARGET_INCLUDE_DIRECTORIES(libDasModuleMsgpack PUBLIC
		${MSGPACK_SOURCE_DIR}/include
  )
	SETUP_CPP11(libDasModuleMsgpack)

ENDIF()