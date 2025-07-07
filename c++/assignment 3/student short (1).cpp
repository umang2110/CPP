#include<iostream>
using namespace std;

class Student
{
    int id,age;
    string name,course,city,email,clg;

public:
    void setstudent(int id,string name,int age,string course,string city,string email,string clg)
    {
        this-> id = id;
        this-> name = name;
        this-> age = age;
        this-> course = course;
        this-> city = city;
        this-> email = email;
        this-> clg = clg;
    }

    void getstudent()
    {
        cout << "id = " << id <<endl;
        cout << "name = " << name <<endl;
        cout << "age = " << age <<endl;
        cout << "course = " << course <<endl;
        cout << "city = " << city <<endl;
        cout << "email = " << email <<endl;
        cout << "clg = " << clg <<endl << endl;

    }

};

int main()
{
    Student ramesh,mahesh,krish,dhruv,aayush;

    ramesh.setstudent(1,"ramesh das",18,"Computer Engineering","surat","rameshdas6@gmail.com","ssasit");
    ramesh.getstudent();

    mahesh.setstudent(2,"mahesh patel",19,"Mechanical Engineering","surat","maheshp21@gmail.com","ssasit");
    mahesh.getstudent();

    krish.setstudent(3,"krish more",19,"Civil Engineering","surat","morekrish5@gmail.com","ssasit");
    krish.getstudent();

    dhruv.setstudent(4,"dhruv modi",20,"Computer Engineering","aanand","dmodi112@gmail.com","ssasit");
    dhruv.getstudent();

    aayush.setstudent(5,"aayush tanawala",19,"BCA","surat","aayushtana43@gmail.com","ssasit");
    aayush.getstudent();

    return 0;
}