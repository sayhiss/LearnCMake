set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_library(SayHello SHARED SayHello.cpp)

#将源文件所在目录加入到头文件目录，如果不加会找不到SayHello.h这个头文件
include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(OutputPath Main.cpp)
target_link_libraries(OutputPath SayHello)
