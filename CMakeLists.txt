cmake_minimum_required(VERSION 3.10)
project(visual_mark)

set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS "-std=c++17")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -Wall")

if(NOT DEFINED VISUAL_MARK_VERSION)
  set(VISUAL_MARK_VERSION_MAJOR 1)
  set(VISUAL_MARK_VERSION_MINOR 0)
  set(VISUAL_MARK_VERSION_PATCH 0)
  set(VISUAL_MARK_VERSION ${VISUAL_MARK_VERSION_MAJOR}.${VISUAL_MARK_VERSION_MINOR}.${VISUAL_MARK_VERSION_PATCH})
  set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/install/${PROJECT_NAME}-${VISUAL_MARK_VERSION})
endif()

include(cmake/global_definition.cmake)
include(FindPkgConfig)
find_package(PkgConfig)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Core Gui Widgets Svg X11Extras REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5OpenGL REQUIRED)

EXECUTE_PROCESS(
  COMMAND pkg-config --variable=host_bins Qt5Core
  OUTPUT_VARIABLE Qt5BIN
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

include_directories(
  include
  ${CMAKE_CURRENT_SOURCE_DIR}/window
  ${CMAKE_CURRENT_SOURCE_DIR}/window/main_form/include
  ${CMAKE_CURRENT_SOURCE_DIR}/component
)

qt5_wrap_cpp(MOC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/window/main_form/include/mainwindow.h

  # ${CMAKE_CURRENT_SOURCE_DIR}/window/select_form/include/select_form.h
  ${CMAKE_CURRENT_SOURCE_DIR}/window/main_form/include/qribbon.h)

set(RESOURCES window/mainwindow.qrc)

# qt_widgets
add_executable(visual_mark
  core/main.cpp
  core/runtime/application_manager.cc
  core/runtime/plugin_manager.cc

  window/main_form/src/mainwindow.cpp
  window/main_form/src/qribbon.cpp

  window/select_form/select_form.cpp

  component/logger/logger.cc
  component/logger/easylogging++.cc

  ${MOC_FILES}

  ${RESOURCES}
)

target_link_libraries(visual_mark PRIVATE
  Qt5::Core
  Qt5::Gui
  Qt5::Widgets
  Qt5::OpenGL
  Qt5::Svg
  Qt5::X11Extras)

include(cmake/install.cmake)