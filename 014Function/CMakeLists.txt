cmake_minimum_required(VERSION 3.22)
project(Function)

function(func1)
    message(STATUS "func1 called")
endfunction(func1)

message(STATUS "================")

func1()
FUNC1()

set(Var1 "var1: init")

function(func2)
    set(Var1 "Var1: value in func2")
    message(STATUS ${Var1})
endfunction()

message(STATUS "================")
message(STATUS "Var1 before call func2: ${Var1}")

func2()
message(STATUS "Var1 after call func2: ${Var1}")

function(func3)
    set(Var1 "Var1: value in func3" PARENT_SCOPE)
    message(STATUS ${Var1})
    set(Var2 "Var2: init in func3" PARENT_SCOPE)
endfunction()

message(STATUS "================")
message(STATUS "Var1 before call func3: ${Var1}")
message(STATUS "Var2 before call func3: ${Var2}")
func3()
message(STATUS "Var1 after call func3: ${Var1}")
message(STATUS "Var2 after call func3: ${Var2}")

function(func4 arg1 arg2)
    message(STATUS "arg1 = ${arg1}")
    message(STATUS "arg2 = ${arg2}")
    message(STATUS "ARGC = ${ARGC}")
    message(STATUS "${ARGV0} - ${ARGV1}")
    message(STATUS "ARGV = ${ARGV}")
    message(STATUS "ARGN = ${ARGN}")
    message(STATUS "ARGV2 = ${ARGV2}")
endfunction() 

message(STATUS "================")
Func4("aaa" "bbb" "ccc" "ddd")
