# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/HospitalSimulationWithGUI_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/HospitalSimulationWithGUI_autogen.dir/ParseCache.txt"
  "HospitalSimulationWithGUI_autogen"
  )
endif()
