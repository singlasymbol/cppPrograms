#include<iostream>

using namespace std;

class decrement
{
int i;

public:

	void get()
	{
		cin>>i;
	}

	void display()
	{
		cout<<"i is"<<i<<"\n";
	}

friend decrement operator --(decrement &obj1);
};

decrement operator --(decrement &temp)
{
	//temp.i;
	--temp.i;
	return temp;
}

int main()
{
	decrement obj,obj1;
	int i,j,k;
	
	obj.get();
	cout<<"the number is ";
	obj.display();
 	
 	--obj;
 	
 	cout<<"the number after decrement is\n";
 	obj.display();
 }
 	
 	

	
