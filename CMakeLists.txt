cmake_minimum_required(VERSION 3.14)
project(Cpp_App)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Cpp_App
        BinaryEvaluator.cpp
        BinaryEvaluator.h
        BinaryExpression.cpp
        BinaryExpression.h
        Evaluator.cpp
        Evaluator.h
        main.cpp
        SimpleCalculator.cpp
        SimpleCalculator.h)
