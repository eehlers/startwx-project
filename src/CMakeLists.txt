
project(foo)
cmake_minimum_required(VERSION 2.8.12.1)

include_directories(${CMAKE_HOME_DIRECTORY})
include_directories("/usr/lib/x86_64-linux-gnu/wx/include/gtk2-unicode-3.0" "/usr/include/wx-3.0")
add_definitions(-D_FILE_OFFSET_BITS=64 -DWXUSINGDLL -D__WXGTK__ -D_UNICODE)
link_directories("/usr/lib/x86_64-linux-gnu")
add_executable(Foo Application.cpp Frame.cpp DialogA.cpp)
target_link_libraries(Foo -pthread wx_gtk2u_xrc-3.0 wx_gtk2u_html-3.0 wx_gtk2u_qa-3.0 wx_gtk2u_adv-3.0 wx_gtk2u_core-3.0 wx_baseu_xml-3.0 wx_baseu_net-3.0 wx_baseu-3.0)

