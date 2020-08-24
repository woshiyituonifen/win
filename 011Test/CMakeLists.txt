cmake_minimum_required(VERSION 3.17)
project(011Test)

set(CMAKE_CXX_STANDARD 14)

#add_executable(011Test main.cpp)
#find_library(LUALIB ssl /usr/lib)
#target_link_libraries(011Test ${OPENSSL_LIBRARIES})
#include_directories(
#        # kernel headers
##        "${OPENSSL_ROOT_DIR}"
#        ${./include/}
#)

#link_libraries(/usr/local/lib/libcrypto.dylib)
#target_link_libraries(011Test ${OPENSSL_LIBRARIES})
set(INC_DIR ./include)
set(LINK_DIR ./lib)
include_directories(${INC_DIR})
link_directories(${LINK_DIR})
aux_source_directory(./ DIR_SRC)
#add_executable(011Test main.cpp)
add_executable(011Test ${DIR_SRC})
target_link_libraries(011Test  libcrypto.a libssl.a)
