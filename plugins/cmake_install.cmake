# Install script for directory: D:/obs-studio-0.6.4/plugins

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/obs-studio")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/obs/build5/plugins/win-wasapi/cmake_install.cmake")
  include("D:/obs/build5/plugins/win-dshow/cmake_install.cmake")
  include("D:/obs/build5/plugins/win-capture/cmake_install.cmake")
  include("D:/obs/build5/plugins/image-source/cmake_install.cmake")
  include("D:/obs/build5/plugins/obs-x264/cmake_install.cmake")
  include("D:/obs/build5/plugins/obs-libfdk/cmake_install.cmake")
  include("D:/obs/build5/plugins/obs-ffmpeg/cmake_install.cmake")
  include("D:/obs/build5/plugins/obs-outputs/cmake_install.cmake")
  include("D:/obs/build5/plugins/rtmp-services/cmake_install.cmake")
  include("D:/obs/build5/plugins/text-freetype2/cmake_install.cmake")

endif()
