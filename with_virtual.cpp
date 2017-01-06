#include<iostream>
using namespace std;

class base

{
public:

virtual void show()
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
	base *b,*y;
	derived d;
	base e;	
	y=&e;
	b=&d;
	y->show();
	b->show();
}
