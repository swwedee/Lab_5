#pragma once
#include <iostream>
using namespace std;

class Car {
protected:
    string brand;
    int price;
    int speed;

public:
    Car(string b = "Unknown", int p = 0, int s = 0);
    virtual ~Car();

    virtual void show();
};


class SportCar : virtual public Car {
protected:
    string model;

public:
    SportCar(string b, int p, int s, string m);
    ~SportCar();

    void show() override;
};

class ElectricCar : virtual public Car {
protected:
    int battery;

public:
    ElectricCar(string b, int p, int s, int bat);
    ~ElectricCar();

    void show() override;
};

class FamilyCar : virtual public Car {
public:
    FamilyCar(string b, int p, int s);
    ~FamilyCar();

    void show() override;
};


class HybridCar : public SportCar, public ElectricCar, public FamilyCar {
public:
    HybridCar(string b, int p, int s, string m, int bat);
    ~HybridCar();

    void show() override;
};