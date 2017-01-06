#include<iostream>

using namespace std;

class base
{
	public:
	
	void show()
	{	
		cout<<"base class\n";
	}
	
};

class derived:public base
{
public:

void show()
{
	cout<<"derived class\n";
	}
};


main()
{
	base *b;
	
	derived d;
	
	b=&d;
	
	b->show();
}

