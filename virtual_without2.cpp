#include<iostream>

using namespace std;

class base{
public :

void display()
{
	cout<<"display base\n";
	}
	
	virtual void show()
	
	{
		cout<<"show base\n";
		}
	};
	
	
class derived:public base{
public :

void display()
{
	cout<<"display derived\n";
	}
	
 void show()
	{
		cout<<"show derived\n";
		}
		
		
};
	
main()
{

base b;
derived d;

base *bptr;
cout<<"bptr points to the base\n";

bptr=&b;

bptr->display();
bptr->show();

cout<<"bptr shows to the derived\n";
bptr=&d;

bptr->display();
bptr->show();
}
