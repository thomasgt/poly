
add_subdirectory(core)


add_executable(poly
               main.cpp
               MainWindow.cpp
               MainWindow.h
               MainWindow.ui)

target_link_libraries(poly Qt5::Widgets)
target_link_libraries(poly core)
target_include_directories(poly PRIVATE ${CMAKE_CURRENT_BINARY_DIR})