cmake_minimum_required(VERSION 3.30.3)

project(step2)

add_executable(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/src/main.cpp)

add_subdirectory(
    ${CMAKE_SOURCE_DIR}/lib
)

target_link_libraries(${PROJECT_NAME}
    bank_lib
)