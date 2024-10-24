#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Qt6::QuickControls2Basic" for configuration "Release"
set_property(TARGET Qt6::QuickControls2Basic APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Qt6::QuickControls2Basic PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/Qt6QuickControls2Basic.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "Qt6::QuickControls2BasicStyleImpl;Qt6::Qml;Qt6::Core"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/Qt6QuickControls2Basic.dll"
  )

list(APPEND _cmake_import_check_targets Qt6::QuickControls2Basic )
list(APPEND _cmake_import_check_files_for_Qt6::QuickControls2Basic "${_IMPORT_PREFIX}/lib/Qt6QuickControls2Basic.lib" "${_IMPORT_PREFIX}/bin/Qt6QuickControls2Basic.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
