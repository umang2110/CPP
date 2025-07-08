#include <iostream>
using namespace std;

class Hotel
{
    int hotel_id,hotel_staff_quantity,hotel_room_quantity;
    string hotel_type,hotel_rating,hotel_location;
    static string hotel_name;
    static int hotel_establish_year;

public:
    void sethotel()
    {
        cout << "Enter Hotel ID: ";
        cin >> hotel_id;
        cout << "Enter Hotel Type (Hotel/Motel): ";
        cin >> hotel_type;
        cout << "Enter Rating (1 to 7 Star): ";
        cin >> hotel_rating;
        cout << "Enter Location (City): ";
        cin >> hotel_location;
        cout << "Enter Staff Quantity: ";
        cin >> hotel_staff_quantity;
        cout << "Enter Room Quantity: ";
        cin >> hotel_room_quantity;
    }

    void gethotel()
    {
        cout << "Hotel ID: " << hotel_id << endl ;
        cout << "Hotel Name: " << hotel_name << endl;
        cout << "Hotel Type: " << hotel_type<< endl;
        cout << "Rating: " << hotel_rating<< endl;
        cout << "Location: " << hotel_location<< endl;
        cout << "Established Year: " << hotel_establish_year<< endl;
        cout << "Staff Quantity: " << hotel_staff_quantity<< endl;
        cout << "Room Quantity: " << hotel_room_quantity << endl;
    }
};

string Hotel::hotel_name="xyz";
int Hotel::hotel_establish_year=1998;

int main()
{
    int n;
    cout << "Enter number of hotels: ";
    cin >> n;

    Hotel h[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for hotel " << i + 1 << endl;
        h[i].sethotel();
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\nHotel " << i + 1 << " Info " << endl;
        h[i].gethotel();
    }

    return 0;
}