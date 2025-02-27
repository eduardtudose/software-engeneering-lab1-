#pragma once
#include "Car.h"
class ElectricCar : public Car {
public:
    ElectricCar(string driver) const override;
    void displayDetails();
};

