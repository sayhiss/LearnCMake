project(HelloCMake) 
set(SRC_LIST HelloCMake.cpp)
message("This is a message")
message(STATUS "This is another message")
#仅仅是会发送错误，不会阻断编译
#message(SEND_ERROR "This is SEND_ERROR message")
#发送致命错误且会阻断编译
#message(FATAL_ERROR "This is FATAL_ERROR message")
#每个项目都有二进制目录（编译源码）内置的变量PROJECT_BINARY_DIR
message(STATUS "bin dir: ${HelloCMake_BINARY_DIR}")
message(STATUS "bin dir: ${PROJECT_BINARY_DIR}")
#每个项目都有源目录（编译目录）PROJECT_SOURCE_DIR
message(STATUS "source dir: ${HelloCMake_SOURCE_DIR}")
message(STATUS "source dir: ${PROJECT_SOURCE_DIR}")
add_executable(hello_cmake ${SRC_LIST})
