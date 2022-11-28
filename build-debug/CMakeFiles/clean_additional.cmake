# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/demo_themes_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/demo_themes_autogen.dir/ParseCache.txt"
  "demo_themes_autogen"
  )
endif()
