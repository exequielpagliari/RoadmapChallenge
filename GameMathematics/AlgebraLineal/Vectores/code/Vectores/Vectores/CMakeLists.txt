
add_executable (Vectores "Vectores.cpp" "Vectores.h" "main.cpp" "Test.cpp" "Test.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Vectores PROPERTY CXX_STANDARD 20)
endif()

