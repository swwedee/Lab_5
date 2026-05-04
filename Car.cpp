#include "Car.h"


Car::Car(string b, int p, int s)
{
    cout << "CAR constructor\n";
    brand = b;
    price = p;
    speed = s;
}

Car::~Car()
{
    cout << "car destructor\n";
}

void Car::show()
{
    cout << "Brand: " << brand
         << ", Price: " << price
         << ", Speed: " << speed << endl;
}



SportCar::SportCar(string b, int p, int s, string m)
    : Car(b, p, s)
{
    cout << "SPORTCAR constructor\n";
    model = m;
}

SportCar::~SportCar()
{
    cout << "sportcar destructor\n";
}

void SportCar::show()
{
    cout << "SportCar\n";
}



ElectricCar::ElectricCar(string b, int p, int s, int bat)
    : Car(b, p, s)
{
    cout << "ELECTRICCAR constructor\n";
    battery = bat;
}

ElectricCar::~ElectricCar()
{
    cout << "electriccar destructor\n";
}

void ElectricCar::show()
{
    cout << "ElectricCar\n";
}



FamilyCar::FamilyCar(string b, int p, int s)
    : Car(b, p, s)
{
    cout << "FAMILYCAR constructor\n";
}

FamilyCar::~FamilyCar()
{
    cout << "familycar destructor\n";
}

void FamilyCar::show()
{
    cout << "FamilyCar\n";
}



HybridCar::HybridCar(string b, int p, int s, string m, int bat)
    : Car(b, p, s),
      SportCar(b, p, s, m),
      ElectricCar(b, p, s, bat),
      FamilyCar(b, p, s)
{
    cout << "HYBRIDCAR constructor\n";
}

HybridCar::~HybridCar()
{
    cout << "hybridcar destructor\n";
}

void HybridCar::show()
{
    Car::show();
    cout << "\nHybrid car:\n";

    SportCar::show();
    ElectricCar::show();
    FamilyCar::show();
}