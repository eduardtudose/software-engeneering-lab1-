#include "CombustionCar.h"


CombustionCar::CombustionCar(string driver) {
    this->driver = driver;
}
    void CombustionCar::displayDetails() const override {
        cout << "Internal Combustion Car - Driver: " << driver << "\nPassengers: ";
        for (const auto& p : passengers) cout << p << " ";
        cout << "\n";
    }
};