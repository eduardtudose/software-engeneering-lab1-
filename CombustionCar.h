#pragma once
#include "Car.h"
#include <cstring>
class CombustionCar :
    public Car
{
   
    public:

        CombustionCar(string driver);

        void displayDetails();
        
};

