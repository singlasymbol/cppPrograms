#include<iostream>

using namespace std;

class base
{
	public:
	
	base()
	{
	cout<<"in base class constructor\n";
	}

	~base()
	{
		cout<<"in base class destructor\n";
		}
		
};
class derived:public base
{
	public:
	
	derived()
	{
		cout<<"in derived class constructor\n";
	}
	~derived()
	{
		cout<<"in  derived class destructor\n";
	
	}
};

int main()
{
	base *bptr=new derived();
	delete bptr;
}
	
	
