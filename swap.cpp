#include<iostream>

using namespace std;

void swap(int &a,int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
//	cout<<"x is "<<a<<"\n" <<"y is "<<b<<"\n";	
}	

int main()
{

int x,y;

cout<<"enter the numbers you want to swap"<<"\n";
cin>>x>>y;
swap(x,y);


	cout<<"x is "<<x<<"\n" <<"y is "<<y<<"\n";	

return 0;
}

	
	
