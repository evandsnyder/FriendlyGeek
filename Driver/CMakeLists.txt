cmake_minimum_required (VERSION 3.12)

set(DRIVER_SOURCES 
"FriendlyGeekEngine.cpp" "FriendlyGeekEngine.h"
)

add_executable(FriendlyGeekDriver ${DRIVER_SOURCES})
target_link_libraries(FriendlyGeekDriver FriendlyGeekEngine)