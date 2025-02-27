#include "Car.h"
#include <vector>
#include <string>


Car::Car(string driver)  {
    this->driver = driver;
}
    virtual Car::~Car() {}

    void Car::addPassenger(string passenger) {
        passengers.push_back(passenger);
    }

    void Car::addPassenger(vector<string> newPassengers) {
        passengers.insert(passengers.end(), newPassengers.begin(), newPassengers.end());
    }

    virtual void Car::displayDetails() const = 0; 
};