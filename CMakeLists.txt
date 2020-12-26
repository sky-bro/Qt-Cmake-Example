cmake_minimum_required(VERSION 3.5)

project(Qt-CMake-Example
        VERSION 1.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Network Widgets LinguistTools REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Network Widgets LinguistTools REQUIRED)

find_package(PkgConfig)
pkg_search_module(BOTAN REQUIRED botan-2>=2.3.0)
find_library(BOTAN_LIBRARY_VAR # /usr/include/botan-2
    NAMES ${BOTAN_LIBRARIES} # botan-2
    HINTS ${BOTAN_LIBRARY_DIRS} ${BOTAN_LIBDIR}) # "" /usr/lib
add_subdirectory(lib)
add_subdirectory(Socks-Alice)
add_subdirectory(Socks-Bob)
