#include "Car.h"
#include "CombustionCar.h"
#include "ElectricCar.h"
#include <iostream>

int main() {
    ElectricCar eCar1("Alice"), eCar2("Bob");
    InternalCombustionCar icCar1("Charlie"), icCar2("David");

    eCar1.addPassenger({ "Eve", "Frank" });
    eCar2.addPassenger("Grace");
    eCar2.addPassenger("Hannah");

    icCar1.addPassenger({ "Ian", "Jack" });
    icCar2.addPassenger("Kelly");
    icCar2.addPassenger("Leo");

    Car* cars[] = { &eCar1, &eCar2, &icCar1, &icCar2 };
    for (Car* car : cars) {
        car->displayDetails(); 
    }

    return 0;
}