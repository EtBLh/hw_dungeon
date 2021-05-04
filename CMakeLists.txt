cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

# Set project name and version
project(Dungeon VERSION 0.1)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Enable debug symbols by default
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug 
    CACHE STRING 
      "Choose the type of build (Debug or Release)" FORCE)
endif()

# Export compile commands for completion engines (optional)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set option to control setting the resource path variable
option(USE_INSTALL_RESOURCE_PATH "Set resource path to install location" OFF)

if(NOT USE_INSTALL_RESOURCE_PATH)
  set(RESOURCE_PATH "${PROJECT_SOURCE_DIR}/content/")
else()
  set(RESOURCE_PATH "${CMAKE_INSTALL_PREFIX}/share/${CMAKE_PROJECT_NAME}/content/")
endif()

# Find SFML shared libraries
find_package(SFML 2.5 COMPONENTS system window graphics audio REQUIRED)
find_package(nlohmann_json 3.2.0 REQUIRED)

file(GLOB root_dir CONFIGURE_DEPENDS src/*.cpp src/*.h
file(GLOB node_dir CONFIGURE_DEPENDS src/node/*.cpp src/node/*.h)
file(GLOB service_dir CONFIGURE_DEPENDS src/service/*.cpp src/service/*.h)
file(GLOB events_dir CONFIGURE_DEPENDS src/events/*.cpp src/events/*.h))
file(GLOB view_dir CONFIGURE_DEPENDS src/view/*.cpp src/view/*.h)

# Compile executable
add_executable(Dungeon ${root_dir} ${node_dir} ${evnets_dir} ${view_dir} ${service_dir})

# Copy files
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/res DESTINATION ${PROJECT_BINARY_DIR})

# Set include directory search paths
target_include_directories(Dungeon 
  PRIVATE
    "${PROJECT_BINARY_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
  )

# Set executable RPATH
set_target_properties(Dungeon
  PROPERTIES
      INSTALL_RPATH
        "${CMAKE_INSTALL_PREFIX}/lib"
  )

target_link_libraries(Dungeon sfml-graphics sfml-audio nlohmann_json::nlohmann_json)

# Set executable install location
install(TARGETS Dungeon DESTINATION bin)

# Set install location for resources
install(DIRECTORY content
  DESTINATION "${CMAKE_INSTALL_PREFIX}/share/${CMAKE_PROJECT_NAME}"
)
