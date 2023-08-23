set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_executable(customize_install Main.cpp)

#指定二进制文件要安装的目录，这里为/${CMAKE_INSTALL_PREFIX}/CustomizeInstall/bin
install(TARGETS customize_install DESTINATION CustomizeInstall/bin)
