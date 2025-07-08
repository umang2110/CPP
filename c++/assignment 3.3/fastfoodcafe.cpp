#include <iostream>
using namespace std;

class FastFoodCafe
{
    int id,establish_year,staff_quantity;
    string name,location,rating,type;
    
public:
    
    FastFoodCafe()
    {
        cout << "Enter Cafe ID: ";
        cin >> id;

        cout << "Enter Cafe Name : ";
        cin >> name;

        cout << "Enter Cafe Type (rooftop/normal): ";
        cin >> type;

        cout << "Enter Cafe Rating (1 Star to 5 Star): ";
        cin >> rating;

        cout << "Enter Cafe Location (city): ";
        cin >> location;

        cout << "Enter Establish Year: ";
        cin >> establish_year;

        cout << "Enter Staff Quantity: ";
        cin >> staff_quantity;
    }
    
    void getfastfoodcafe()
    {
        cout << "\n Fast Food Cafe Information \n";
        cout << "Cafe ID: " << id << endl;
        cout << "Cafe Name: " << name << endl;
        cout << "Cafe Type: " << type << endl;
        cout << "Cafe Rating: " << rating << endl;
        cout << "Cafe Location: " << location << endl;
        cout << "Establish Year: " << establish_year << endl;
        cout << "Staff Quantity: " << staff_quantity << endl;
    }
};

int main()
{
    FastFoodCafe cafe;
    cafe.getfastfoodcafe();

    return 0;
}