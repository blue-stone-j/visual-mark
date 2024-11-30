install(TARGETS visual_mark
  DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/config
  DESTINATION ${CMAKE_INSTALL_PREFIX})

# install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/window/Resources/visual.ico
# DESTINATION ${CMAKE_INSTALL_PREFIX})

# # generate and install CMakeconfig files
# include(CMakePackageConfigHelpers)
# write_basic_package_version_file(
# "${PROJECT_NAME}ConfigVersion.cmake"
# VERSION ${VISUAL_MARK_VERSION}
# COMPATIBILITY SameMajorVersion)

# install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake
# DESTINATION ${CMAKE_INSTALL_PREFIX}/cmake/${PROJECT_NAME})