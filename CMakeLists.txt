cmake_minimum_required(VERSION 3.8)
project(RTK_adaptive_driver)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)

find_package(catkin REQUIRED COMPONENTS
        roscpp std_msgs
        )

catkin_package(
        INCLUDE_DIRS include/
)

include_directories(
        ${catkin_INCLUDE_DIRS}
        include/
)

add_executable(RTK_adaptive_driver ${SOURCE_FILES})

target_link_libraries(RTK_adaptive_driver
        ${catkin_LIBRARIES}
        )
