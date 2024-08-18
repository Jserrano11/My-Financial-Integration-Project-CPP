cmake_minimum_required(VERSION 3.28)
project(Financial_App)

set(CMAKE_CXX_STANDARD 17)

add_executable(Financial_App main.cpp
        Loan.cpp
        Loan.h
        Interest.cpp
        Interest.h
        Meal.cpp
        Meal.h
)
