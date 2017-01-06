#include<iostream>

using namespace std;

class check
{
	int i;
	
	public:
	
	check()
	{
		i=0;
	}
	
	check operator ++()
	{
	
		check temp;
		++i;
		temp.i=i;
		
		return temp;
	}
	
	check operator ++(int)
	{
		check temp;
		i++;
		temp.i=i;
		return temp;
	}
	
	void display()
	{
		cout<<"i is"<<i<<"\n";
	}
};

int main()
{
	check obj,obj1;
	cout<<"the number are\n";
	obj.display();
	obj1.display();
	
	obj1=++obj;
	cout<<"the number after pre-increment are\n";
	obj.display();
	obj1.display();
	
	obj1=obj++;
	
	cout<<"the number after post-increment are\n";
	obj.display();
	obj1.display();
	
}
