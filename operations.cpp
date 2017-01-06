#include<iostream>

using namespace std;

int main()
{

	int a,b,c;
	cin>>a>>b;	
	c=a+b;
	
	cout<<"the sum is"<<c<<"\n";
	
	c=a*b;
	
	cout <<"the product is "<< c<<"\n";
	
	if(b!=0)
	{
	c=a/b; 
	
	cout<<"the result after divison is"<< c<<"\n";
	}
	else
	cout<<"divison not possible";
	
	c=a-b;
	
	cout<<"the result after subtraction is "<<c<<"\n";
	
	}
