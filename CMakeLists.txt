cmake_minimum_required(VERSION 3.17)

# Use CMakeLists.txt's parent directory for the project id/name
get_filename_component(PROJECT_ID ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" PROJECT_ID ${PROJECT_ID})
project(${PROJECT_ID})

# Include ncurses library
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(test main.cpp)
add_executable(test2 main2.cpp)
add_executable(test3 main3.cpp)

target_link_libraries(test ${CURSES_LIBRARIES})
target_link_libraries(test2 ${CURSES_LIBRARIES})
target_link_libraries(test3 ${CURSES_LIBRARIES})