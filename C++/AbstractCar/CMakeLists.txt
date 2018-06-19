cmake_minimum_required(VERSION 3.9)
project(AbstractCar)

set(CMAKE_CXX_STANDARD 11)

add_executable(AbstractCar main.cpp Car.cpp Car.h BMW.cpp BMW.h Wheels.cpp Wheels.h Bridgestone.cpp Bridgestone.h CarFactory.cpp CarFactory.h BMWFactory.cpp BMWFactory.h)