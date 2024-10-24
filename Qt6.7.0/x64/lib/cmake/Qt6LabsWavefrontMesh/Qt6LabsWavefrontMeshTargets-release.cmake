#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Qt6::LabsWavefrontMesh" for configuration "Release"
set_property(TARGET Qt6::LabsWavefrontMesh APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Qt6::LabsWavefrontMesh PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/Qt6LabsWavefrontMesh.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "Qt6::Qml"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/Qt6LabsWavefrontMesh.dll"
  )

list(APPEND _cmake_import_check_targets Qt6::LabsWavefrontMesh )
list(APPEND _cmake_import_check_files_for_Qt6::LabsWavefrontMesh "${_IMPORT_PREFIX}/lib/Qt6LabsWavefrontMesh.lib" "${_IMPORT_PREFIX}/bin/Qt6LabsWavefrontMesh.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
