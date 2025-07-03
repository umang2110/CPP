#include<iostream>
using namespace std;

class car
{
 public:
 int car_id,car_release_year;
 string car_company_name,car_color,car_model;
 
};


int main()
{
    car bmw,hyundai,suzuki,bugatti;
    
    bmw .car_id = 111 ;
    bmw .car_company_name = "Bayerische Motoren Werke AG";
    bmw .car_color = "blue";
    bmw .car_model = "BMW i7";
    bmw .car_release_year = 2023;
    
    hyundai .car_id = 112 ;
    hyundai .car_company_name = "Hyundai Motor Company";
    hyundai .car_color = "black";
    hyundai .car_model = "Creta";
    hyundai .car_release_year = 2024;
    
    suzuki .car_id = 113 ;
    suzuki .car_company_name = "Suzuki Motor Corporation";
    suzuki .car_color = "white";
    suzuki .car_model = "Wagon R";
    suzuki .car_release_year = 1999;
    
    bugatti .car_id = 114 ;
    bugatti .car_company_name = "Bugatti Automobiles S.A.S.";
    bugatti .car_color = "grey";
    bugatti .car_model = "Bugatti Veyron";
    bugatti .car_release_year = 1999;
    
    cout << "car 1:" << endl;
    cout << "car id = " << bmw .car_id << endl;
    cout << "car company name = " << bmw .car_company_name << endl;
    cout << "car color = " << bmw .car_color << endl;
    cout << "car model = " << bmw .car_model << endl;
    cout << "car release year = " << bmw .car_release_year << endl <<endl;
    
    cout << "car 2:" << endl;
    cout << "car id = " << hyundai .car_id << endl;
    cout << "car company name = " << hyundai .car_company_name << endl;
    cout << "car color = " << hyundai .car_color << endl;
    cout << "car model = " << hyundai .car_model << endl;
    cout << "car release year = " << hyundai .car_release_year << endl << endl;
    
    cout << "car 3:" << endl;
    cout << "car id = " << suzuki .car_id << endl;
    cout << "car company name = " << suzuki .car_company_name << endl;
    cout << "car color = " << suzuki .car_color << endl;
    cout << "car model = " << suzuki .car_model << endl;
    cout << "car release year = " << suzuki .car_release_year << endl <<endl;
    
    cout << "car 4:" << endl;
    cout << "car id = " << bugatti .car_id << endl;
    cout << "car company name = " << bugatti .car_company_name << endl;
    cout << "car color = " << bugatti .car_color << endl;
    cout << "car model = " << bugatti .car_model << endl;
    cout << "car release year = " << bugatti .car_release_year << endl << endl;
    
    
    

    return 0;
}