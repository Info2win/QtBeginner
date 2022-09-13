# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QObjectAndMoc_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QObjectAndMoc_autogen.dir\\ParseCache.txt"
  "QObjectAndMoc_autogen"
  )
endif()
