set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_library(linear SHARED linear.cpp)
add_library(static_linear STATIC linear.cpp)

set_target_properties(static_linear PROPERTIES OUTPUT_NAME "linear")

get_target_property(OUTPUT_VALUE static_linear OUTPUT_NAME)

message(STATUS "OUTPUT_VALUE= ${OUTPUT_VALUE}")

get_target_property(UNDEFINE_VALUE static_linear UNDIFENE_NAME)

message(STATUS "UNDEFINE_VALUE = ${UNDEFINE_VALUE}")

#VERSION 为版本号 SOVERSION 为API版本号
set_target_properties(linear PROPERTIES VERSION 1.0 SOVERSION 1)

install(TARGETS linear static_linear LIBRARY DESTINATION lib ARCHIVE DESTINATION lib/${PROJECT_NAME})
install(FILES linear.h DESTINATION include/${PROJECT_NAME})
