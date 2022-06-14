#include <iostream>
using namespace std;

class driver
{
protected:
    string driver_name;
    bool lisenced;

public:
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

class car
{
protected:
    string car_name;
    string car_no_plate;
    driver *obj;

public:
    car()
    {
        car_name = "WOLKSWAGON";
        car_no_plate = "ABC-123";
    }
    car(string car_name, string car_no_plate, driver *obj)
    {
        this->car_name = car_name;
        this->car_no_plate = car_no_plate;
        this->obj = obj;
    }
    car(const car &obj)
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

int main()
{
    {
        driver d1("jamal", false);
        {
            car c1("alto", "tkk-002", &d1);
        }
        cout << "lisence is or not:" << d1.getdriverlisenced() << endl;
    }
}