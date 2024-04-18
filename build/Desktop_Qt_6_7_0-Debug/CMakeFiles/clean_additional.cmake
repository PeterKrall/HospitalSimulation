# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/HospitalSimulation_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/HospitalSimulation_autogen.dir/ParseCache.txt"
  "HospitalSimulation_autogen"
  )
endif()
