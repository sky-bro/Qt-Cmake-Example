set(SOURCE
    add.cpp)

add_library(socksAB ${SOURCE})

target_link_libraries(socksAB
    PUBLIC Qt${QT_VERSION_MAJOR}::Network
    PRIVATE ${BOTAN_LIBRARY_VAR})

target_include_directories(socksAB
    PRIVATE ${BOTAN_INCLUDE_DIRS})
