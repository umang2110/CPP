#include <iostream>
using namespace std;

class Admin 
{
private:
	double total_annual_revenue;
    bool can_terminate;
    
protected:
    double manager_salary;
    double employee_salary;

public:
    string company_name;
    int total_staff;

    Admin() 
	{
        company_name = "TechCorp Pvt Ltd";
        manager_salary = 90000.00;
        employee_salary = 40000.00;
        total_staff = 120;
        total_annual_revenue = 7.5;
        can_terminate = true;
    }

    void myAccess() 
	{
        cout << "Admin Access " << endl;
        cout << "Company Name: " << company_name << endl;
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Total Annual Revenue: " << total_annual_revenue << endl;
        cout << "Can Terminate: " << "Yes" << endl;
    }
};

class Manager : public Admin 
{
public:
    void myAccess() 
	{
        cout << "\nManager Access " << endl;
        cout << "Company Name: " << company_name << endl;
        cout << "Manager Salary: " << manager_salary  << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        
    }
};

class Employee : public Manager {
public:
    void myAccess() 
	{
        cout << "\nEmployee Access " << endl;
        cout << "Company Name: " << company_name << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
    
    }
};

int main() {
    Admin admin;
    Manager manager;
    Employee employee;

    admin.myAccess();
    manager.myAccess();
    employee.myAccess();

    return 0;
}

