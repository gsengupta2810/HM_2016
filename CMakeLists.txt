cmake_minimum_required(VERSION 2.8)
project( DisplayImage )
find_package( OpenCV REQUIRED )
add_executable( humandetect humandetect.cpp )
target_link_libraries( humandetect ${OpenCV_LIBS} )

add_executable( testing testing.cpp )
target_link_libraries( testing ${OpenCV_LIBS} )
