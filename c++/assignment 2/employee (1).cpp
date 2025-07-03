#include<iostream>
using namespace std;

class employee
{
public:
    int emp_id,emp_age,emp_experience;
    string emp_name,emp_role,emp_city,emp_company_name;
    double emp_salary;

};



int main()
{
    employee pavan,mahesh,dhruv,dev,raju;
    pavan. emp_id = 001;
    pavan. emp_name ="pavan";
    pavan. emp_age = 32;
    pavan. emp_role="project manager";
    pavan. emp_salary=30000;
    pavan. emp_city="surat";
    pavan. emp_experience=2;
    pavan. emp_company_name="tmj";

    mahesh. emp_id = 002;
    mahesh. emp_name ="mahesh";
    mahesh. emp_age = 30;
    mahesh. emp_role="marketing manager";
    mahesh. emp_salary=28000;
    mahesh. emp_city="ahmedabad";
    mahesh. emp_experience=1;
    mahesh. emp_company_name="upg";

    dhruv. emp_id = 003;
    dhruv. emp_name ="dhruv";
    dhruv. emp_age = 35;
    dhruv. emp_role="sales manager";
    dhruv. emp_salary=20000;
    dhruv. emp_city="gandhinagar";
    dhruv. emp_experience=0;
    dhruv. emp_company_name="pyt";

    dev. emp_id = 004;
    dev. emp_name ="dev";
    dev. emp_age = 25;
    dev. emp_role="administartive assistant";
    dev. emp_salary=23000;
    dev. emp_city="surat";
    dev. emp_experience=1;
    dev. emp_company_name="apv";

    raju. emp_id = 005;
    raju. emp_name ="raju";
    raju. emp_age = 37;
    raju. emp_role="accountant";
    raju. emp_salary=45000;
    raju. emp_city="aanand";
    raju. emp_experience=1;
    raju. emp_company_name="dmd";

    cout << "employee 1:" << endl;
    cout << "emp_id = " <<pavan. emp_id  << endl;
    cout << "emp_name = " <<pavan. emp_name << endl;
    cout << "emp_age = " << pavan. emp_age  << endl;
    cout << "emp_role = " << pavan. emp_role << endl;
    cout << "emp_salary = " << pavan. emp_salary << endl;
    cout << "emp_city = " << pavan. emp_city << endl;
    cout << "emp_experience = " << pavan. emp_experience << endl;
    cout << "emp_company_name = " << pavan. emp_company_name  << endl << endl;

    cout << "employee 2:" << endl;
    cout << "emp_id = " <<mahesh. emp_id  << endl;
    cout << "emp_name = " <<mahesh. emp_name << endl;
    cout << "emp_age = " << mahesh. emp_age  << endl;
    cout << "emp_role = " << mahesh. emp_role << endl;
    cout << "emp_salary = " << mahesh. emp_salary << endl;
    cout << "emp_city = " << mahesh. emp_city << endl;
    cout << "emp_experience = " << mahesh. emp_experience << endl;
    cout << "emp_company_name = " << mahesh. emp_company_name  << endl << endl;

    cout << "employee 3:" << endl;
    cout << "emp_id = " <<dhruv. emp_id  << endl;
    cout << "emp_name = " <<dhruv. emp_name << endl;
    cout << "emp_age = " << dhruv. emp_age  << endl;
    cout << "emp_role = " << dhruv. emp_role << endl;
    cout << "emp_salary = " << dhruv. emp_salary << endl;
    cout << "emp_city = " << dhruv. emp_city << endl;
    cout << "emp_experience = " << dhruv. emp_experience << endl;
    cout << "emp_company_name = " << dhruv. emp_company_name  << endl << endl;

    cout << "employee 4:" << endl;
    cout << "emp_id = " <<dev. emp_id  << endl;
    cout << "emp_name = " <<dev. emp_name << endl;
    cout << "emp_age = " << dev. emp_age  << endl;
    cout << "emp_role = " << dev. emp_role << endl;
    cout << "emp_salary = " << dev. emp_salary << endl;
    cout << "emp_city = " << dev. emp_city << endl;
    cout << "emp_experience = " << dev. emp_experience << endl;
    cout << "emp_company_name = " << dev. emp_company_name  << endl << endl;

    cout << "employee 5:" << endl;
    cout << "emp_id = " <<raju. emp_id  << endl;
    cout << "emp_name = " <<raju. emp_name << endl;
    cout << "emp_age = " << raju. emp_age  << endl;
    cout << "emp_role = " << raju. emp_role << endl;
    cout << "emp_salary = " << raju. emp_salary << endl;
    cout << "emp_city = " << raju. emp_city << endl;
    cout << "emp_experience = " << raju. emp_experience << endl;
    cout << "emp_company_name = " << raju. emp_company_name  << endl << endl;
    
    return 0;
}