# - Config file for the LibObs package
# It defines the following variables
#  LIBOBS_INCLUDE_DIRS
#  LIBOBS_LIBRARIES
#  LIBOBS_PLUGIN_DESTINATION{,32,64}
#  LIBOBS_PLUGIN_DATA_DESTINATION

set(LIBOBS_PLUGIN_DESTINATION "D:/obs/build5/rundir/RelWithDebInfo/obs-plugins/64bit")
set(LIBOBS_PLUGIN_DESTINATION32 "D:/obs/build5/rundir/RelWithDebInfo/obs-plugins/32bit")
set(LIBOBS_PLUGIN_DESTINATION64 "D:/obs/build5/rundir/RelWithDebInfo/obs-plugins/64bit")
set(LIBOBS_INCLUDE_DIRS "D:/obs-studio-0.6.4/libobs")
set(LIBOBS_PLUGIN_DATA_DESTINATION "D:/obs/build5/rundir/RelWithDebInfo/data/obs-plugins")

# Cleanup possible relative paths
get_filename_component(LIBOBS_PLUGIN_DESTINATION "${LIBOBS_PLUGIN_DESTINATION}" ABSOLUTE)
get_filename_component(LIBOBS_PLUGIN_DESTINATION32 "${LIBOBS_PLUGIN_DESTINATION32}" ABSOLUTE)
get_filename_component(LIBOBS_PLUGIN_DESTINATION64 "${LIBOBS_PLUGIN_DESTINATION64}" ABSOLUTE)
get_filename_component(LIBOBS_INCLUDE_DIRS "${LIBOBS_INCLUDE_DIRS}" ABSOLUTE)
get_filename_component(LIBOBS_PLUGIN_DATA_DESTINATION "${LIBOBS_PLUGIN_DATA_DESTINATION}" ABSOLUTE)

if(NOT TARGET libobs)
	include("${CMAKE_CURRENT_LIST_DIR}/LibObsTarget.cmake")
endif()

set(LIBOBS_LIBRARIES libobs)

