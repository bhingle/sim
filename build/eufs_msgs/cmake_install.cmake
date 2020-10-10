# Install script for directory: /home/viresh/new_ws/src/eufs_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/viresh/new_ws/install")
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
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/viresh/new_ws/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/viresh/new_ws/install" TYPE PROGRAM FILES "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/viresh/new_ws/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/viresh/new_ws/install" TYPE PROGRAM FILES "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/viresh/new_ws/install/setup.bash;/home/viresh/new_ws/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/viresh/new_ws/install" TYPE FILE FILES
    "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/setup.bash"
    "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/viresh/new_ws/install/setup.sh;/home/viresh/new_ws/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/viresh/new_ws/install" TYPE FILE FILES
    "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/setup.sh"
    "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/viresh/new_ws/install/setup.zsh;/home/viresh/new_ws/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/viresh/new_ws/install" TYPE FILE FILES
    "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/setup.zsh"
    "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/viresh/new_ws/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/viresh/new_ws/install" TYPE FILE FILES "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/.rosinstall")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eufs_msgs/msg" TYPE FILE FILES
    "/home/viresh/new_ws/src/eufs_msgs/msg/WheelSpeeds.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/WheelSpeedsStamped.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/CarState.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/CanState.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/LapStats.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/PathIntegralParams.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/PathIntegralStats.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/FullState.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/ConeArray.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/ConeWithCovariance.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/ConeArrayWithCovariance.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/PointArray.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/ChassisCommand.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/ChassisState.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/PathIntegralStatus.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/PathIntegralTiming.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/Runstop.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/Costmap.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/PointArrayStamped.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/BoundingBoxes.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/BoundingBox.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/SLAMState.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/Waypoint.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/WaypointArrayStamped.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/EKFState.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/SLAMErr.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/EKFErr.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/SystemStatus.msg"
    "/home/viresh/new_ws/src/eufs_msgs/msg/TopicStatus.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eufs_msgs/action" TYPE FILE FILES "/home/viresh/new_ws/src/eufs_msgs/action/CheckForObjects.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eufs_msgs/msg" TYPE FILE FILES
    "/home/viresh/new_ws/devel/.private/eufs_msgs/share/eufs_msgs/msg/CheckForObjectsAction.msg"
    "/home/viresh/new_ws/devel/.private/eufs_msgs/share/eufs_msgs/msg/CheckForObjectsActionGoal.msg"
    "/home/viresh/new_ws/devel/.private/eufs_msgs/share/eufs_msgs/msg/CheckForObjectsActionResult.msg"
    "/home/viresh/new_ws/devel/.private/eufs_msgs/share/eufs_msgs/msg/CheckForObjectsActionFeedback.msg"
    "/home/viresh/new_ws/devel/.private/eufs_msgs/share/eufs_msgs/msg/CheckForObjectsGoal.msg"
    "/home/viresh/new_ws/devel/.private/eufs_msgs/share/eufs_msgs/msg/CheckForObjectsResult.msg"
    "/home/viresh/new_ws/devel/.private/eufs_msgs/share/eufs_msgs/msg/CheckForObjectsFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eufs_msgs/cmake" TYPE FILE FILES "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/eufs_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/viresh/new_ws/devel/.private/eufs_msgs/include/eufs_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/viresh/new_ws/devel/.private/eufs_msgs/share/roseus/ros/eufs_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/viresh/new_ws/devel/.private/eufs_msgs/share/common-lisp/ros/eufs_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/viresh/new_ws/devel/.private/eufs_msgs/share/gennodejs/ros/eufs_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/viresh/new_ws/devel/.private/eufs_msgs/lib/python2.7/dist-packages/eufs_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/viresh/new_ws/devel/.private/eufs_msgs/lib/python2.7/dist-packages/eufs_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/eufs_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eufs_msgs/cmake" TYPE FILE FILES "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/eufs_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eufs_msgs/cmake" TYPE FILE FILES
    "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/eufs_msgsConfig.cmake"
    "/home/viresh/new_ws/build/eufs_msgs/catkin_generated/installspace/eufs_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eufs_msgs" TYPE FILE FILES "/home/viresh/new_ws/src/eufs_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/viresh/new_ws/build/eufs_msgs/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/viresh/new_ws/build/eufs_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
