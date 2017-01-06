#include<iostream>

using namespace std;


class a
{
	public:
	int a;
};

class b:virtual public a
{
	public:
	int b;
};

class c:virtual public a
{
	public:
	int c;
};

class d:public b,public c
{
	int d;
	public:
	
	void sum()
	{
		d=a+b+c;
	}

	void display()
	{
	cout<<"a+b+c="<<d;
	}
};

main()
{
	d obj;
	
	obj.a=10;
	obj.b=20;
	obj.c=30;
	obj.sum();
	obj.display();
		
}	
