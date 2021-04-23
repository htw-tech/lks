cmake_minimum_required(VERSION 3.5)
project(CeCar_LKS)

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

add_executable(lks src/lks.cpp)
ament_target_dependencies(lks rclcpp std_msgs)

add_executable(pos src/pos.cpp)
ament_target_dependencies(pos rclcpp std_msgs)

add_executable(mp src/pos.cpp)
ament_target_dependencies(mp rclcpp std_msgs)

add_executable(hlc src/hlc.cpp)
ament_target_dependencies(hlc rclcpp std_msgs)

install(TARGETS
  lks
  pos
  mp
  hlc
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

# TODO target_link_libraries
ament_package()