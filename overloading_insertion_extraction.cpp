#include<iostream>

using namespace std;

class dist
{
	int feet;
	int inches;
	
	public:
	
	dist()
	{
	}
	
	dist(int f,int i)
	{
		feet=f;
		inches=i;
	}
	
	friend istream & operator>>(istream &input,dist &d)
	{
		input>>d.feet>>d.inches;
		return input;
		}
		
		
	friend ostream & operator<<(ostream &output,dist &d)
	{
		output<<"->feet: "<<d.feet<<"-> inches: "<<d.inches;
		return output;
		}
};


main()
{
	dist d1(10,11),d2(24,25),d3;
	
	cout<<"enter the value of object\n";
	cin>>d3;
	
	cout<<"first distance "<<d1;
	
	cout<<"\nsecond distance "<<d2;
	
	cout<<"\nthird distance "<<d3;
	
		}
		
