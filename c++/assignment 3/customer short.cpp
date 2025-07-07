#include<iostream>
using namespace std;

class Customer 
{
    int id,age,simcard_validity,mobile_number;
    string name,city,telecom_brand_name;

public:
    void setcustomer(int id,string name,int age,string city,int mobile_number,int simcard_validity,string telecom_brand_name)
    {
        this-> id = id;
        this-> name = name;
        this-> age = age;
        this-> city = city;
        this-> mobile_number = mobile_number;
        this-> simcard_validity = simcard_validity;
        this-> telecom_brand_name = telecom_brand_name;
    }

    void getchstomer()
    {
        cout << "id = " << id <<endl;
        cout << "name = " << name <<endl;
        cout << "age = " << age <<endl;
        cout << "city = " << city <<endl;
        cout << "mobile_number = " << mobile_number <<endl;
        cout << "simcard_validity = " << simcard_validity <<endl;
        cout << "telecom_brand_name = " << telecom_brand_name <<endl << endl;

    }

};

int main()
{
    Customer ramesh,mahesh,krish,dhruv,aayush;

    ramesh. setcustomer(1,"ramesh das",43,"surat",9284796354,2028,"jio");
    ramesh. getchstomer();

    mahesh. setcustomer(2,"mahesh patel",19,"surat",9916679177,2027,"airtel");
    mahesh. getchstomer();

    krish. setcustomer(3,"krish more",26,"surat",7392749269,2025,"BSNL");
    krish. getchstomer();
 
    dhruv. setcustomer(4,"dhruv modi",37,"aanand",8253735927,2027,"VI");
    dhruv. getchstomer();

    aayush. setcustomer(5,"aayush tanawala",20,"surat",9743798627,2026,"jio");
    aayush. getchstomer();

    return 0;
}