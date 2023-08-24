#查询逻辑核数
cmake_host_system_information(RESULT NumberOfLogicCores QUERY NUMBER_OF_LOGICAL_CORES)
message(STATUS "NUMBER_OF_LOGICAL_CORES = ${NumberOfLogicCores}")
#查询物理核数
cmake_host_system_information(RESULT NumberOfPhysicalCores QUERY NUMBER_OF_PHYSICAL_CORES)
message(STATUS "NUMBER_OF_PHYSICAL_CORES = ${NumberOfPhysicalCores}")

#查询主机名和主机域名全称
cmake_host_system_information(RESULT HostName QUERY HOSTNAME FQDN)
message(STATUS "HOSTNAM,FQDN = ${HostName}")

#查询总虚拟内存和可用虚拟内存
cmake_host_system_information(RESULT VirtualMemory QUERY TOTAL_VIRTUAL_MEMORY AVAILABLE_VIRTUAL_MEMORY)
message(STATUS "TOTAL_VIRTUAL_MEMORY,AVAILABLE_VIRTUAL_MEMORY = ${VirtualMemory}")

#查询总物理内存和可用物理内存
cmake_host_system_information(RESULT PhysicalMemory QUERY TOTAL_PHYSICAL_MEMORY AVAILABLE_PHYSICAL_MEMORY)
message(STATUS "TOTAL_PHYSICAL_MEMORY,AVAILABLE_PHYSICAL_MEMORY = ${PhysicalMemory}")

#查询是否为64位
cmake_host_system_information(RESULT Is64Bit QUERY IS_64BIT)
message(STATUS "IS_64BIT = ${Is64Bit}")

#查询处理器是否有浮点单元
cmake_host_system_information(RESULT HasFPU QUERY HAS_FPU)
message(STATUS "HAS_FPU = ${HasFPU}")

#查询处理器是否支持多媒体扩展指令集和处理器是否支持加强版多媒体扩展指令集
cmake_host_system_information(RESULT MMX QUERY HAS_MMX HAS_MMX_PLUS)
message(STATUS "HAS_MMX,HAS_MMX_PLUS = ${MMX}")

#查询与SSE指令集相关信息
cmake_host_system_information(RESULT SSE QUERY HAS_SSE HAS_SSE2 HAS_SSE_FP HAS_SSE_MMX)
message(STATUS "HAS_SSE HASSSE_2 HAS_SSE_FP HAS_SSE_MMX : ${SSE}")

#查询处理器是否支持3DNow指令集和处理器是否支持3DNow+指令集
cmake_host_system_information(RESULT AMD3DNow QUERY HAS_AMD_3DNOW HAS_AMD_3DNOW_PLUS)
message(STATUS "HAS_AMD_3DNOW HAS_AMD_3DNOW_PLUS : ${AMD3DNow}")

#查询英特尔安腾架构处理器是否仿真X86
cmake_host_system_information(RESULT IA64 QUERY HAS_IA64)
message(STATUS "HAS_IA64 = ${IA64}")

#查询处理器是否有序列号和处理器的序列号
cmake_host_system_information(RESULT SerialNumber QUERY HAS_SERIAL_NUMBER PROCESSOR_SERIAL_NUMBER)
message(STATUS "HAS_SERIAL_NUMBER,PROCESSOR_SERIAL_NUMBER = ${SerialNumber}")

#查询处理器名称和处理器全描述
cmake_host_system_information(RESULT Processor QUERY PROCESSOR_NAME PROCESSOR_DESCRIPTION)
message(STATUS "PROCESSOR_NAME,PROCESSOR_DESCRIPTION = ${Processor}")

#查询处理器相关信息
cmake_host_system_information(RESULT OS QUERY OS_NAME OS_VERSION OS_PLATFORM)
message(STATUS "OS_NAME,OS_VERSION,OS_PLATFORM = ${OS}")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARU_DIR}/bin)
add_executable(HostSystemInfo Main.cpp)
