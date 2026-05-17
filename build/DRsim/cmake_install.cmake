# Install script for directory: /u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/DRsim

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "../install")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.40-acaab/x86_64-el9/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/DRsim" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/DRsim")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/DRsim"
         RPATH "$ORIGIN/../lib:/cvmfs/sft.cern.ch/lcg/views/LCG_108/x86_64-el9-gcc14-opt/lib64:/cvmfs/sft.cern.ch/lcg/views/LCG_108/x86_64-el9-gcc14-opt/lib:/cvmfs/sft.cern.ch/lcg/releases/LCG_108/ROOT/6.36.02/x86_64-el9-gcc14-opt/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/build/DRsim/DRsim")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/DRsim" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/DRsim")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/DRsim"
         OLD_RPATH "\$ORIGIN/../lib:/cvmfs/sft.cern.ch/lcg/views/LCG_108/x86_64-el9-gcc14-opt/lib64:\$ORIGIN/../rootIO:/cvmfs/sft.cern.ch/lcg/views/LCG_108/x86_64-el9-gcc14-opt/lib:/cvmfs/sft.cern.ch/lcg/releases/LCG_108/ROOT/6.36.02/x86_64-el9-gcc14-opt/lib:"
         NEW_RPATH "$ORIGIN/../lib:/cvmfs/sft.cern.ch/lcg/views/LCG_108/x86_64-el9-gcc14-opt/lib64:/cvmfs/sft.cern.ch/lcg/views/LCG_108/x86_64-el9-gcc14-opt/lib:/cvmfs/sft.cern.ch/lcg/releases/LCG_108/ROOT/6.36.02/x86_64-el9-gcc14-opt/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.40-acaab/x86_64-el9/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/DRsim")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/build/DRsim/CMakeFiles/DRsim.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE FILE FILES
    "/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/DRsim/gui.mac"
    "/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/DRsim/icons.mac"
    "/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/DRsim/init.mac"
    "/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/DRsim/init_vis.mac"
    "/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/DRsim/run_ele.mac"
    "/u/user/haeun/DRC/Sim/DRC_KEK2025_MCP/DRC_TB2024_MCP/DRsim/vis.mac"
    )
endif()

