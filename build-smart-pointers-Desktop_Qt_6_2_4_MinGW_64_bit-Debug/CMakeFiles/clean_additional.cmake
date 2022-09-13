# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\smart-pointers_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\smart-pointers_autogen.dir\\ParseCache.txt"
  "smart-pointers_autogen"
  )
endif()
