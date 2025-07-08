#include <iostream>
using namespace std;

class DiamondCompany
{
    int id,staff_quantity,import_raw_diamonds,export_diamonds;
    float revenue;
    string ceo,name;

public:
    DiamondCompany(int id, string name, int staff_quantity, float revenue, int import_raw_diamonds, int export_diamonds, string ceo)
    {
        this-> id = id;
        this-> name = name;
        this-> staff_quantity = staff_quantity;
        this-> revenue = revenue;
        this-> import_raw_diamonds = import_raw_diamonds;
        this-> export_diamonds = export_diamonds;
        this-> ceo = ceo;
    }

    void getcompany()
    {
        cout << "\n Diamond Company Information \n";
        cout << "Company ID: " << id << endl;
        cout << "Company Name: " << name << endl;
        cout << "Staff Quantity: " << staff_quantity << endl;
        cout << "Annual Revenue:" << revenue << " million" << endl;
        cout << "Raw Diamonds Imported: " << import_raw_diamonds << endl;
        cout << "Diamonds Exported: " << export_diamonds << endl;
        cout << "CEO Name: " << ceo << endl;
    }
};

int main()
{
    int id, staff, imported, exported;
    float revenue;
    string name, ceo;

    cout << "Enter Company ID: ";
    cin >> id;

    cout << "Enter Company Name : ";
    cin >> name;

    cout << "Enter Staff Quantity: ";
    cin >> staff;

    cout << "Enter Annual Revenue(per year): ";
    cin >> revenue;

    cout << "Enter Number of Raw Diamonds Imported per Year: ";
    cin >> imported;

    cout << "Enter Number of Diamonds Exported per Year: ";
    cin >> exported;

    cout << "Enter CEO Name : ";
    cin >> ceo;

    DiamondCompany company(id, name, staff, revenue, imported, exported, ceo);
    company.getcompany();

    return 0;
}