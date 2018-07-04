add_library(core
            Point.h
            Point.cpp
            Poly.h
            Poly.cpp PolyViewer.cpp PolyViewer.h)

target_link_libraries(core Qt5::Core)
target_include_directories(core PRIVATE ${CMAKE_CURRENT_BINARY_DIR})