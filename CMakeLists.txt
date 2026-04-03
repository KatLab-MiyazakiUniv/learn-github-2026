cmake_minimum_required(VERSION 3.14)
project(learn_github_2026)

# GoogleTest requires at least C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  "${CMAKE_CURRENT_SOURCE_DIR}/3/*.cpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/test/*.cpp"
)

add_executable(${PROJECT_NAME}-googletest ${SRC_FILES})
target_link_libraries(${PROJECT_NAME}-googletest gtest_main)
target_include_directories(${PROJECT_NAME}-googletest
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/3
)

enable_testing()
add_test(NAME test COMMAND ${PROJECT_NAME}-googletest)