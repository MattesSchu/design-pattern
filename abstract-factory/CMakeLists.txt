cmake_minimum_required(VERSION 3.20)

# set the project name
project(abstract-factory)

set(CMAKE_CXX_STANDARD 17)

# add the executable
add_executable(abstract-factory
	AbstractFactory.cpp
	Tisch/ITisch.h
	Tisch/HolzTisch.cpp
	Tisch/HolzTisch.h
	Tisch/StahlTisch.cpp
	Tisch/StahlTisch.h
  StahlFabrik.h
	IFabrik.h
	HolzFabrik.h
	HolzFabrik.cpp
	StahlFabrik.cpp
	Produzent/Produzent.h
	Produzent/Produzent.cpp
)
