#include <iostream>
#include "ElectricCar.h"
#include <vector>
#include <string>

using namespace std;

ElectricCar:: ElectricCar(string driver) {
    this->driver = driver;
}
 void ElectricCar ::  displayDetails() const  {
        cout << "Electric Car - Driver: " << driver << "\nPassengers: ";
        for (const auto& p : passengers) cout << p << " ";
        cout << "\n";
    }