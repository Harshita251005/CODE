#include <iostream>
#include <string.h>
using namespace std;
class Vehicle
{
protected:
    int year;
    string make;

public:
    Vehicle(string make, int year)
    {
        this->make = make;
        this->year = year;
    }

    virtual void displayDetails() const
    {
        cout << "Make: " << make << endl
             << "Year: " << year << endl;
    }
};
class Car : public Vehicle
{
protected:
    string fuelType;

public:
    Car(string make, int year, string fuelType) : Vehicle(make, year)
    {
        this->fuelType = fuelType;
    }
    void displayDetails() const override
    {
        Vehicle::displayDetails();
        cout << "fuelType: " << fuelType << endl;
    }
};
class Bike : public Vehicle
{
protected:
    string engineType;

public:
    Bike(string make, int year, string engineType) : Vehicle(make, year)
    {

        this->engineType = engineType;
    }
    void displayDetails() const override
    {
        Vehicle::displayDetails();
        cout << "engineType" << engineType << endl;
    }
};
class Truck : public Car
{
protected:
    int cargoCapacity;

public:
    Truck(string make, int year, string fuelType, int cargoCapacity) : Car(make, year, fuelType)
    {

        this->cargoCapacity = cargoCapacity;
    }
    void displayDetails() const override
    {
        Car::displayDetails();
        cout << "cargoCapacity" << cargoCapacity << endl;
    }
};
int main()
{
    
}
