# CMake configuration
CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

# Getting sources
FILE(GLOB_RECURSE HEADER_FILES ${CMAKE_SOURCE_DIR}/Header/*)

# Getting sources
FILE(GLOB_RECURSE SOURCE_FILES ${CMAKE_SOURCE_DIR}/Source/*)

# Creating the executable target
ADD_EXECUTABLE(${TARGET_COMPILE} ${SOURCE_FILES})

# Platform specific linkage
IF(PLATFORM_WINDOWS)
    # Linking all static libraries for windows
    TARGET_LINK_LIBRARIES(${TARGET_COMPILE}
            ${SFML_DEPENDENCIES}
            ${WINDOWS_DEPENDENCIES})

ELSEIF(PLATFORM_UNIX)
    # Linking all static libraries for windows
    TARGET_LINK_LIBRARIES(${TARGET_COMPILE}
            ${SFML_DEPENDENCIES}
            ${UNIX_DEPENDENCIES})

ENDIF()
