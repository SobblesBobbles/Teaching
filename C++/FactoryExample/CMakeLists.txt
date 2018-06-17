cmake_minimum_required(VERSION 3.9)
project(FactoryExample)

set(CMAKE_CXX_STANDARD 11)

add_executable(FactoryExample main.cpp Pizza.cpp Pizza.h HawaiianPizza.cpp HawaiianPizza.h PizzaShop.cpp PizzaShop.h DominosPizza.cpp DominosPizza.h PizzaFactory.cpp PizzaFactory.h PepperoniPizza.cpp PepperoniPizza.h)