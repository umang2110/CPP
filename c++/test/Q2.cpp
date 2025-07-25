#include<iostream>
using namespace std;

class Car 
{
    string model;
    int year;
    float speed;

public:
    void setCarDetails(string model, int year, float speed) 
	{
        this->model = model;
        this->year = year;
        this->speed = speed;
    }

    string getModel() 
	{
        return model;
    }

    int getYear() 
	{
        return year;
    }

    float getSpeed() 
	{
        return speed;
    }

    void getDetails() 
	{
        cout << "Car Model: " << this->model << endl;
        cout << "Year: " << this->year << endl;
        cout << "Speed: " << this->speed << " km/h" << endl;
    }
};

int main() 
{
    Car c1;

    string model;
    int year;
    float speed;

    cout << "Enter car model: ";
    cin >> model;

    cout << "Enter year: ";
    cin >> year;

    cout << "Enter speed (km/h): ";
    cin >> speed;

    c1.setCarDetails(model, year, speed);

    cout << "\nCar Information: \n";
    c1.getDetails();

    return 0;
}

