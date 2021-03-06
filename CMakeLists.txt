cmake_minimum_required(VERSION 3.5)

project(string_essentials LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti")

add_library(${PROJECT_NAME} STATIC
    include/string_essentials/string_essentials.hpp
    src/string_essentials.cpp
)

target_include_directories(${PROJECT_NAME}
    PRIVATE ./
    PUBLIC include
)

option(ENABLE_TESTS "Enable tests" OFF)
if (${ENABLE_TESTS})
    add_subdirectory(test)
endif()
