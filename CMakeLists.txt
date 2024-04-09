cmake_minimum_required(VERSION 3.14)

project(HospitalSimulation LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(HospitalSimulation
  main.cpp
  configuration.h
  hospital.h hospital.cpp
  configuration.cpp

)
target_link_libraries(HospitalSimulation Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS HospitalSimulation
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
