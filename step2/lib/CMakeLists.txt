add_library(bank_lib
    ${CMAKE_CURRENT_SOURCE_DIR}/Account.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Customer.cpp
)

target_include_directories(bank_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)