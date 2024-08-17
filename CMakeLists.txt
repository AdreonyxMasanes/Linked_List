cmake_minimum_required(VERSION 3.2)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD REQUIRED ON)

project(LinkedList)
include_directories(${PROJECT_SOURCE_DIR}/Linked_List/include)

set(SRC_FILES
${PROJECT_SOURCE_DIR}/Linked_List/src/LinkedList.cpp
${PROJECT_SOURCE_DIR}/Linked_List/src/ListNode.cpp
)

add_executable(LinkedList ${SRC_FILES})