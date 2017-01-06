#include<iostream>

using namespace std;

class perimeter
{
	private:
	int p,length,breadth;
	
	public:
	
	void get()
	{
		cout<<"enter the length and breadth respectively\n";
		cin>>length>>breadth;
	
	}
	
	int perimeter_rect()
	{
		p=2*(length+breadth);
		return p;
	}
	
}t;


class area
{
	protected:
	int a,l,b;
	
	public:
	
	int are(t.length,t.breadth)
	{	
		a=t.length*t.breadth;
		return a;
	}
};

class rectangle:public perimeter,public area
{
	int i,j,k;
	public:
	void display()
	{
		t.get();
		cout<<"perimeter :"<<perimeter_rect()<<"\n";
		cout<<"area :"<<are(t.length,t.breadth)<<"\n";
	}
};


int main()
{
	rectangle rect;
	
	//rect.get();
	//rect.perimeter_rect();
	//rect.are(length,breadth);
	rect.display();
}
