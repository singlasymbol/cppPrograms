#include<iostream>

using namespace std;

class base //abstract class
{
public:
void print()
{
	cout<<"print-base class\n";
	}
	
	virtual void show()=0;
};

class derived:public base
{
public:

void print()
{
	cout<<"print derived class\n";
	
}

void show()
{
	cout<<"show derived class\n";
}
};

main()
{	
base *bptr;
derived d;
bptr=&d;

bptr->print();

bptr->show();
}
