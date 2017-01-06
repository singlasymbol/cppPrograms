#include<iostream>

using namespace std;

int main()
{

	int a,b,c,d,r;
	
	cout<<"enter the radius of circle"<<"\n";
	
	cin>>a;
	
	cout<<"enter both sides of rectangle"<<"\n";
	
	cin>>b>>c;
	
	cout<<"enter the side of square"<<"\n";
	
	cin>>d;
	
	r= 3.14 * a * a;
	
	cout<<"the area of circle is"<<r<<"\n";
	
	
	r= 2 * 3.14 * a;
	
	
	cout<<"the circumference of circle is"<<r<<"\n";
	
	
	r=b*c;
	
	cout<<"the area of rectangle is"<<r<<"\n";
	
	r=d*d;
	
	cout<<"the area of square is"<<r<<"\n";
	return 0;
	}
