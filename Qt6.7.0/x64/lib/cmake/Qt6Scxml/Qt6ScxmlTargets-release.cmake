#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Qt6::Scxml" for configuration "Release"
set_property(TARGET Qt6::Scxml APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Qt6::Scxml PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/Qt6Scxml.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/Qt6Scxml.dll"
  )

list(APPEND _cmake_import_check_targets Qt6::Scxml )
list(APPEND _cmake_import_check_files_for_Qt6::Scxml "${_IMPORT_PREFIX}/lib/Qt6Scxml.lib" "${_IMPORT_PREFIX}/bin/Qt6Scxml.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)