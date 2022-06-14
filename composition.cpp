#include <iostream>
using namespace std;

class driver
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

class car
{
protected:
    string car_name;
    string car_no_plate;
    driver d1;


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
    void setdriver2(string driver_name, bool lisenced)
    {
        d1.setdriver(driver_name, lisenced);
    }
    string getcarname()
    {
        return car_name;
    }
    string getcarnoplate()
    {
        return car_no_plate;
    }
    string getdrivername2(){
        return d1.getdrivername();
    }
};

int main(){
{
    car c1;
    c1.setdriver2("ahmed",false);
    cout<<c1.getdrivername2();
}
    // cout<<c1.getdrivername2();

}