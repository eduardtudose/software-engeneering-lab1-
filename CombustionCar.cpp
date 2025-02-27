#include <iostream>
#include "CombustionCar.h"

using namespace std;

CombustionCar::CombustionCar(string driver) {
    this->driver = driver;
}
    void CombustionCar::displayDetails() const {
        cout << "Internal Combustion Car - Driver: " << driver << "\nPassengers: ";
        for (const auto& p : passengers) cout << p << " ";
        cout << "\n";
    }
};