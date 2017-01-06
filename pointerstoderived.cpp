#include<iostream>

using namespace std;

class a
{
	int z;
	
	void display()
	{
		cout<<"z is "<<z;
		
		}
		
};

class b: public a
{
	public:

	int d;

	display()
	{
		cout<<"z = "<<z<<endl;
		cout<<"d = "<<d<<endl;
	}
};


main()
{
	a *cp;
	a base;
	
	cp->z=100;
	cp->display();
}
