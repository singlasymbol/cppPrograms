#include<iostream>

using namespace std;

class shape
{
	protected:
	float width,height;
	
	public:
	
	void set_data(float a,float b)
	{
		width=a;
		height=b;
	}
	
};


class rectangle:public shape
{
	public:
	
	float area()
	{
		 cout<<width*height<<endl;
	}
};

class triangle:public shape
{
	public:
	float area()
	{
		cout<<((width*height)/2)<<endl;
	}
};

int main()
{
	rectangle rect;
	triangle tri;
	rect.set_data(5,3);
	tri.set_data(2,6);
	rect.area();
	tri.area();
	
	return 0;
}


