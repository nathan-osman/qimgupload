cmake_minimum_required(VERSION 3.2.0 FATAL_ERROR)
project(qimgupload)

set(PROJECT_NAME qimgupload)

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 0)
set(PROJECT_VERSION ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH})

find_package(Qt5Network 5.4 REQUIRED)

add_subdirectory(qimgupload)
