configure_file(qimgupload.h.in "${CMAKE_CURRENT_BINARY_DIR}/qimgupload.h")

file(GLOB HEADERS include/qimgupload/*.h)

set(HEADERS
    "${HEADERS}"
    "${CMAKE_CURRENT_BINARY_DIR}/qimgupload.h"
)

set(SRC
    src/uploader.cpp
    src/uploader_p.h
)

add_library(qimgupload SHARED ${HEADERS} ${SRC})

set_target_properties(qimgupload PROPERTIES
    CXX_STANDARD          11
    CXX_STANDARD_REQUIRED ON
    DEFINE_SYMBOL         QT_NO_SIGNALS_SLOTS_KEYWORDS
    DEFINE_SYMBOL         QIMGUPLOAD_LIBRARY
    PUBLIC_HEADER         "${HEADERS}"
    VERSION               ${PROJECT_VERSION}
    SOVERSION             ${PROJECT_VERSION_MAJOR}
)

target_include_directories(qimgupload PUBLIC
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>"
    "$<INSTALL_INTERFACE:include>"
)

target_link_libraries(qimgupload Qt5::Network)

install(TARGETS qimgupload
    EXPORT        qimgupload-export
    RUNTIME       DESTINATION bin
    LIBRARY       DESTINATION bin
    ARCHIVE       DESTINATION lib
    PUBLIC_HEADER DESTINATION include/qimgupload
)

install(EXPORT qimgupload-export
    FILE        qimguploadConfig.cmake
    DESTINATION lib/cmake/qimgupload
)

include(CMakePackageConfigHelpers)

write_basic_package_version_file("${CMAKE_CURRENT_BINARY_DIR}/qimguploadConfigVersion.cmake"
    VERSION       ${PROJECT_VERSION}
    COMPATIBILITY SameMajorVersion
)

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/qimguploadConfigVersion.cmake"
    DESTINATION lib/cmake/qimgupload
)
