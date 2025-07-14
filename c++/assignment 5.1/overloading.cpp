#include <iostream>
using namespace std;

class Arithmetic 
{
public:
    double calculate(double a, double b) 
	{
        if (b == 0) 
		{
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }

    double calculate(double a, double b, double c) 
	{
        return a - b - c;
    }

    double calculate(double a, double b, double c, double d) 
	{
        return a * b * c * d;
    }

    double calculate(double a, double b, double c, double d, double e) 
	{
        return a + b + c + d + e;
    }
};

int main() 
{
    Arithmetic obj;

    cout << "Division (10 / 2) = " << obj.calculate(10, 2) << endl;
    cout << "Subtraction (10 - 3 - 2) = " << obj.calculate(10, 3, 2) << endl;
    cout << "Multiplication (2 * 3 * 4 * 5) = " << obj.calculate(2, 3, 4, 5) << endl;
    cout << "Addition (1 + 2 + 3 + 4 + 5) = " << obj.calculate(1, 2, 3, 4, 5) << endl;

    return 0;
}

