#pragma once
#include <vector>
#include <string.h>
class Car
{

protected:
        string driver;
        vector<string> passengers;
 public:
     Car(string driver);
        virtual ~Car() {}

        void addPassenger(string passenger);

        void addPassenger(vector<string> newPassengers);

        virtual void displayDetails() const = 0; 
    
};

