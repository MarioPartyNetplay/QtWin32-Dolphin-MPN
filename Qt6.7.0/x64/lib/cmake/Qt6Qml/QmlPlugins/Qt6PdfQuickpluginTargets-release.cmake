#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Qt6::PdfQuickplugin" for configuration "Release"
set_property(TARGET Qt6::PdfQuickplugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Qt6::PdfQuickplugin PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/./qml/QtQuick/Pdf/pdfquickplugin.dll"
  )

list(APPEND _cmake_import_check_targets Qt6::PdfQuickplugin )
list(APPEND _cmake_import_check_files_for_Qt6::PdfQuickplugin "${_IMPORT_PREFIX}/./qml/QtQuick/Pdf/pdfquickplugin.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
