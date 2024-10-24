#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Qt6::WebEngineQuick" for configuration "Release"
set_property(TARGET Qt6::WebEngineQuick APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Qt6::WebEngineQuick PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/Qt6WebEngineQuick.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/Qt6WebEngineQuick.dll"
  )

list(APPEND _cmake_import_check_targets Qt6::WebEngineQuick )
list(APPEND _cmake_import_check_files_for_Qt6::WebEngineQuick "${_IMPORT_PREFIX}/lib/Qt6WebEngineQuick.lib" "${_IMPORT_PREFIX}/bin/Qt6WebEngineQuick.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
