#include<iostream>
using namespace std;

class RBI
{
	protected:
		float rate;
		
		public:
			
		void getROI()
		{
			cout<< "RBI rate of intrest"<< rate << "%"<< endl;
		}
};

class SBI : public RBI
{
	public:
	SBI()
	{
		rate = 6.5;
	}
	void getRBI()
	{
		cout << "SBI rate of intrest: "<< rate<<endl;
	}
};
class BOB:public RBI
{
	public:
	BOB()
	{
		rate = 7;
	}
	void getRBI()
	{
		cout << "BOB rate of intrest: "<< rate<<endl;
	}
};
class ICICI:public RBI
{
	public:
	ICICI()
	{
		rate = 5.5;
	}
	void getRBI()
	{
		cout << "ICICI rate of intrest: "<< rate<<endl;
	}
};

int main()
{
	SBI sbi;
	BOB bob;
	ICICI icici;
	
	sbi.getRBI();
	bob.getRBI();
	icici.getRBI();
	
	return 0;
}
