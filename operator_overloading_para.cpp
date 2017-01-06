#include<iostream>

using namespace std;

class number
{
	int x,y,z;
	
	public:
	
	number()
	{
		x=0;
		y=0;
		z=0;
		
	}
	
	number(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	}
	
	void display()
	{
		cout<<x<<"\n";
		cout<<y<<"\n";
		cout<<z<<"\n";
	}
	
	number operator -()
	{
		x=-x;
		y=-y;
		z=-z;
	}
};
	
int main()
{
	int q,w,e;
	cout<<"enter the three numbers\n";
	cin>>q>>w>>e;
	number n(q,w,e);
	n.display();
	-n;
	n.display();
	return 0;
}		
