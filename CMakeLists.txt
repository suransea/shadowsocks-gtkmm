cmake_minimum_required(VERSION 3.13)
project(shadowsocksr)

set(CMAKE_CXX_STANDARD 11)

find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0 libnotifymm-1.0)
include_directories(
        ${GTKMM_INCLUDE_DIRS}
        ${LIBNOTIFYMM_INCLUDE_DIRS}
        include
)

aux_source_directory(. DIR_SRCS)
aux_source_directory(util DIR_UTIL_SRCS)
aux_source_directory(ui DIR_UI_SRCS)

add_library(ssr ${DIR_UTIL_SRCS} ${DIR_UI_SRCS})

add_executable(${PROJECT_NAME} ${DIR_SRCS})

target_link_libraries(
        ${PROJECT_NAME}
        ${GTKMM_LIBRARIES}
        ssr
)
