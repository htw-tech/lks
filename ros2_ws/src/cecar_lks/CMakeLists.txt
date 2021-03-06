cmake_minimum_required(VERSION 3.5)
project(cecar_lks)

# Default to C99
if(NOT CMAKE_C_STANDARD)
set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(lds src/lds.cpp)
ament_target_dependencies(lds rclcpp std_msgs)

add_executable(pos src/pos.cpp)
ament_target_dependencies(pos rclcpp std_msgs)

add_executable(mp src/mp.cpp)
ament_target_dependencies(mp rclcpp std_msgs)

add_executable(hlc src/hlc.cpp src/warning.c)
ament_target_dependencies(hlc rclcpp std_msgs)

install(TARGETS
  lds
  pos
  mp
  hlc
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME})

#For Joystick support:
target_link_libraries(hlc udev)
target_include_directories(hlc PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# TODO target_link_libraries
ament_package()
