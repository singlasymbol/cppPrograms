#include<iostream>
#include<strings.h>
#include<cstring>

using namespace std;


int mul(int i,int j)
{
int z=i*j;
	try
	{
		if(z%2!=0)
		throw "result is odd\n";
		else
		
		cout<<z;
		}
		catch(const char *msg)
		
		{
			cout<<msg;
			}
		}
int main()
{

int i,j;
cout<<"enter the numbers\n";
cin>>i>>j;
mul(i,j);
}
