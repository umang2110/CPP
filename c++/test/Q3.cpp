//3. Define a base class `Device` with private attributes `brand` and `powerConsumption`. 
//Implement public methods for setting and getting these attributes. Derive two classes, `Laptop` and `Smartphone`, from the `Device` class.
//Implement methods to display information specific to each device. Demonstrate abstraction by calling the display methods for both `Laptop` and `Smartphone`.

#include <iostream>
using namespace std;

class Device 
{
    string brand;
    int powerConsumption; 

public:
    void setBrand(string brand) 
	{
        this->brand = brand;
    }

    void setPowerConsumption(int power) 
	{
        this->powerConsumption = powerConsumption;
    }

    string getBrand() 
	{
        return brand;
    }

    int getPowerConsumption() 
	{
        return powerConsumption;
    }
};

class Laptop : public Device 
{
    int ramSize; 
    string processor;

public:
    void setLaptopDetails(string brand, int powerConsumption, int ram, string processor) 
	{
        setBrand(brand);
        setPowerConsumption(powerConsumption);
        ramSize = ram;
        processor = processor;
    }

    void displayLaptop() 
	{
        cout << "\nLaptop Details : " << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << "W" << endl;
        cout << "RAM: " << ramSize << " GB" << endl;
        cout << "Processor: " << processor << endl;
    }
};

class Smartphone : public Device 
{
    int cameraMP;
    

public:
    void setSmartphoneDetails(string brand, int PowerConsumption, int cameraMP ) 
	{
        setBrand(brand);
        setPowerConsumption(PowerConsumption);
        cameraMP = cameraMP;

    }

    void displaySmartphone() 
	{
        cout << "\nSmartphone Details :" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power Consumption: " << getPowerConsumption() << "W" << endl;
        cout << "Camera: " << cameraMP << " MP" << endl;
    }
};

int main() 
{
    Laptop myLaptop;
    myLaptop.setLaptopDetails("Dell", 65, 16, "Intel i7");

    Smartphone myPhone;
    myPhone.setSmartphoneDetails("Samsung", 15, 108);

    myLaptop.displayLaptop();
    myPhone.displaySmartphone();

    return 0;
}

