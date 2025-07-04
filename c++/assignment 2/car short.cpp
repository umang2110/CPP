#include<iostream>
using namespace std;

class car
{
private:
    int id,release_year;
    string company_name,color,model;

public:
    void setcar(int id,string company_name,string color,string model,int release_year)
    {
        this->id =id ;
        this->company_name =company_name;
        this->color=color;
        this->model=model;
        this->release_year=release_year;
    }

    void getcar()
    {
        cout << "car id = " << id << endl;
        cout << "car company name = " << company_name << endl;
        cout << "car color = " << color << endl;
        cout << "car model = " << model << endl;
        cout << "car release year = " << release_year << endl <<endl;
    }
};


int main()
{
    car bmw,hyundai,suzuki,bugatti;

    bmw.setcar(111,"Bayerische Motoren Werke AG","blue","BMW i7",2023);
    bmw.getcar();

    hyundai.setcar(112,"Hyundai Motor Company","black","Creta",2024);
    hyundai.getcar();

    suzuki.setcar(113,"Suzuki Motor Corporation", "white","Wagon R",1999 );
    suzuki.getcar();

    bugatti.setcar(114,"Bugatti Automobiles S.A.S.","grey", "Bugatti Veyron", 1999);
    bugatti.getcar();

    return 0;
}