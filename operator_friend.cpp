#include<iostream>

using namespace std;

class xyz
{
	int x;
	int y;
	int z;
public:	
	void get()
	{
		cout<<"enter the values of x,y,x\n";
		cin>>x>>y>>z;
		}
		
	void show()
	{
	
		cout<<x<<"  "<<y<<"  "<<z<<"\n";
	}
	
	friend void operator -(xyz &s);
};

void operator -(xyz &s)
{
	s.x=-s.x;
	s.y=-s.y;
	s.z=-s.z;
}

int main()
{
	xyz s1;
	s1.get();
	cout<<"before oveloading the values are\n";
	s1.show();
	-s1;
	cout<<"after overloading the values are\n";
	s1.show();
	}
