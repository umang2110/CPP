#include<iostream>
using namespace std;

class employee
{
private:
    int id,age,experience;
    string name,role,city,company_name;
    double salary;
    
    public:
    void setemployee(int id,string name,int age,string role,double salary,string city,int experience,string company_name)
    {
    this->id = id;
    this->name=name;
    this->age=age;
    this->role=role;
    this->salary=salary;
    this->city=city;
    this->experience=experience;
    this->company_name=company_name;
    }
    
    void getemployee()
    {
    cout << "employee:" << endl;
    cout << "emp_id = " << id  << endl;
    cout << "emp_name = " <<name << endl;
    cout << "emp_age = " << age  << endl;
    cout << "emp_role = " << role << endl;
    cout << "emp_salary = " << salary << endl;
    cout << "emp_city = " << city << endl;
    cout << "emp_experience = " << experience << endl;
    cout << "emp_company_name = " << company_name  << endl << endl;
    
    }

};



int main()
{
employee pavan,mahesh,dhruv,dev,raju;
  
   pavan.setemployee(1,"pavan",32,"project manager",30000,"surat",2,"tmj"         );
   pavan.getemployee();
   
   mahesh.setemployee(2,"mahesh",30,"marketing manager",20000,"ahmedabad" ,1,"upg"    );
   mahesh.getemployee();
   
   dhruv.setemployee(3,"dhruv",35,"sales manager",20000,"gandhinagar",0,"pyt");
   dhruv.getemployee();
    
    dev.setemployee(4,"dev",25,"administrative assistant",23000,"surat",1,"apv");
    dev.getemployee();
    
    raju.setemployee(5,"raju",37,"accountant",45000,"aanand",1,"dmd");
    raju.getemployee();
    
    return 0;
}