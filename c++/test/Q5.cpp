//5. Define an abstract class `Animal` with pure virtual functions `makeSound()` and `move()`. 
//   Implement concrete/normal classes `Lion` and `Fish` that inherit from `Animal`. 
//   Demonstrate polymorphism by creating an array of `Animal` pointers pointing to objects of both `Lion` and `Fish`. Call the `makeSound()` and `move()` functions for each object.

#include <iostream>
using namespace std;

class Animal 
{
public:
    virtual void makeSound() = 0; 
    virtual void move() = 0;     
         
};

class Lion : public Animal 
{
public:
    void makeSound()  
	{
        cout << "Lion Roar!" << endl;
    }

    void move() 
	{
        cout << "Lion living in land" << endl;
    }
};

class Fish : public Animal 
{
public:
    void makeSound()  
	{
        cout << "Fish !" << endl;
    }

    void move()  
	{
        cout << "Fish swims in water." << endl;
    }
};

int main() 
{
    Animal* animals[2];

    animals[0] = new Lion();
    animals[1] = new Fish();

    for (int i = 0; i < 2; i++) 
	{
        cout << "\nAnimal " << i + 1 << ":\n";
        animals[i]->makeSound();
        animals[i]->move();
    }

    return 0;
}

