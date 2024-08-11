# CMakeList.txt : CMake project for Tet_two, include source and define
# project specific logic here.
#

# Including directoris with header files.
include_directories(data)
include_directories(headers)
include_directories(headers/start_menu)
include_directories(headers/start_menu/buttons)
include_directories(headers/start_menu/click_actions)
include_directories(headers/start_menu/click_handler)
include_directories(headers/setup)

# Add source to this project's executable.
add_executable (Tet_two "sources/Tet_two.cpp"
                        "sources/console_functions.cpp"
                        "sources/start_menu/start_menu_ani.cpp"
                        "sources/start_menu/button_grid.cpp"
                        "sources/start_menu/buttons/button.cpp"
                        "sources/start_menu/click_actions/action_menu.cpp"
                        "sources/start_menu/click_handler/click_handler_sm.cpp"
                        "sources/start_menu/menu_thread.cpp"
                        "sources/start_menu/click_actions/params.cpp"
                        "sources/setup/setup.cpp")


find_package(Boost REQUIRED COMPONENTS thread system filesystem locale)

target_link_libraries(Tet_two Boost::thread Boost::system Boost::filesystem Boost::locale)

file(COPY data DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Tet_two PROPERTY CXX_STANDARD 20)
endif()

