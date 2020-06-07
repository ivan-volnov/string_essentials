cmake_minimum_required(VERSION 3.5)

project(test_string_essentials LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti")

find_package(Catch2 REQUIRED)

add_executable(${PROJECT_NAME}
    unittest.cpp
)

target_include_directories(${PROJECT_NAME}
    PRIVATE ./
)

target_link_libraries(${PROJECT_NAME}
    string_essentials
    Catch2::Catch2
)
