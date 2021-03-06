# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_cecar_lks_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED cecar_lks_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(cecar_lks_FOUND FALSE)
  elseif(NOT cecar_lks_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(cecar_lks_FOUND FALSE)
  endif()
  return()
endif()
set(_cecar_lks_CONFIG_INCLUDED TRUE)

# output package information
if(NOT cecar_lks_FIND_QUIETLY)
  message(STATUS "Found cecar_lks: 0.0.1 (${cecar_lks_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'cecar_lks' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(cecar_lks_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${cecar_lks_DIR}/${_extra}")
endforeach()
