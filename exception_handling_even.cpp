#include<iostream>

using namespace std;

int main()
{
int i,j;
	cout<<"enter a number"<<endl;
	cin>>j;
	
	try
	{
		if(j%2!=0)
		throw "odd";
		
		else
		cout<<"number is "<<j;
	}
	
	catch(const char *msg)
	{
	cout<<"No is"<<msg<<endl;
	}
}
