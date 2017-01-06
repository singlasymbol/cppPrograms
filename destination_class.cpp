#include<iostream>

using namespace std;

class rectangle;

class square
{
	int side;
	
	public:
	
	square(int s)
	{	
		side=s;
	}
	
	int get_side()
	{
		return side;
	}
	
};

class rectangle
{
int length,breadth;

public:

rectangle(int l,int b)
{
	length=l;
	breadth=b;
}

rectangle(square s)
{
	int sqr_side=s.get_side();
	breadth=sqr_side;
	
	length=breadth;
	
}


void show_data()
{
cout<<"length is "<<length<<endl;
cout<<"breadth is "<<breadth<<endl;
}
};

main()
{
rectangle r(10,20);
r.show_data();
square s(50);
r=s;
r.show_data();
}
	
