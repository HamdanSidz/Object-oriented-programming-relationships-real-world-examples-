#include <iostream>
using namespace std;

class car
{
protected:
    string car_name;
    string car_no_plate;

public:
    car()
    {
        car_name = "WOLKSWAGON";
        car_no_plate = "ABC-123";
    }
    car(string car_name, string car_no_plate)
    {
        this->car_name = car_name;
        this->car_no_plate = car_no_plate;
    }
    car(car &obj)
    {
        this->car_name = obj.car_name;
        this->car_no_plate = obj.car_no_plate;
    }
    void setcar(string car_name, string car_no_plate)
    {
        this->car_name = car_name;
        this->car_no_plate = car_no_plate;
    }
    string getcarname()
    {
        return car_name;
    }
    string getcarnoplate()
    {
        return car_no_plate;
    }
};

class driver : public car
{
protected:
    string driver_name;
    bool lisenced;

public:
    driver() {}
    driver(string driver_name, bool lisenced)
    {
        this->driver_name = driver_name;
        this->lisenced = lisenced;
    }
    void setdriver(string driver_name, bool lisenced)
    {
        this->driver_name = driver_name;
        this->lisenced = lisenced;
    }
    string getdrivername()
    {
        return driver_name;
    }
    bool getdriverlisenced()
    {
        return lisenced;
    }
};

int main()
{

    car c1;
    driver d1("Istiaqt", true);
    cout << c1.getcarname() << endl;
    cout << d1.getcarnoplate() << endl;
    cout << d1.getdriverlisenced() << endl;
    cout << d1.getdrivername() << endl;
}