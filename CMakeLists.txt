cmake_minimum_required(VERSION 3.15)
project(humblelogging-conan-test)

find_package(humblelogging REQUIRED)

add_executable(
	${PROJECT_NAME}
	main.cpp
)

target_link_libraries(
	${PROJECT_NAME}
	PUBLIC humblelogging::humblelogging
)