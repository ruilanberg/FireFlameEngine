cmake_minimum_required(VERSION 3.15)
project(game CXX)

add_executable(game WIN32)

target_sources(
	game
	PRIVATE
		main.cpp
)
