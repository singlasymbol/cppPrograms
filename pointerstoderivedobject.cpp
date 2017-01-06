#include<iostream>

using namespace std;

class a
{
public:
int z;

	void display()
	{
		cout<<"z is "<<z<<endl;
	
	}
};

class b:public a
{	
public:
int d;

void display()
{
	cout<<"z is "<<z<<endl;
	cout<<"d is "<<d<<endl;
} 
};


main()
{
b obj;
b *cp;

cp=&obj;


cp->z=100;
cp->d=300;

cout<<"cp points to derived object";
cp->display();
}
