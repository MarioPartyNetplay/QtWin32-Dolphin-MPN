#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Qt6::PdfWidgets" for configuration "Release"
set_property(TARGET Qt6::PdfWidgets APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Qt6::PdfWidgets PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/Qt6PdfWidgets.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/Qt6PdfWidgets.dll"
  )

list(APPEND _cmake_import_check_targets Qt6::PdfWidgets )
list(APPEND _cmake_import_check_files_for_Qt6::PdfWidgets "${_IMPORT_PREFIX}/lib/Qt6PdfWidgets.lib" "${_IMPORT_PREFIX}/bin/Qt6PdfWidgets.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
