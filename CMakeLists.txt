cmake_minimum_required(VERSION 3.23)
project(CoenCars)

set(CMAKE_CXX_STANDARD 20)

add_executable(CoenCars main.cpp Car.cpp Car.h StandardCar.cpp StandardCar.h LuxuryCar.cpp LuxuryCar.h Date.h Date.cpp Time.h Time.cpp
        Company.cpp
        Company.h
        Customer.cpp
        Customer.h
        CorporateCustomer.cpp
        CorporateCustomer.h
        RegularCustomer.cpp
        RegularCustomer.h)
