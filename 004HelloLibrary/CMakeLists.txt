cmake_minimum_required(VERSION 3.22)

project(HelloLibrary)

#windows下需要在dll函数中加 __declspec(dllexport)才能也生成lib给调用者使用，动态库也需要lib去链接

#创建动态库
add_library(hello_library SHARED HelloLibrary.cpp)

#用于增加包含头文件的路径，这里把项目源目录增加到包含头文件的路径中
include_directories(${PROJECT_SOURCE_DIR})

#生成可执行文件
add_executable(hello_main Main.cpp)

#指定某个目标生成所依赖的库
target_link_libraries(hello_main hello_library) 


