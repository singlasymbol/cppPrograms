#include<iostream>

using namespace std;

main()
{

	try
	{
		try
		{
			throw 2;
		}
		catch(int x)
		{
		//cout<<x;
		cout<<"Handle Partially\n";
		throw;
		}
	}
	catch(int x)
	{
		cout<<"Handle remaining\n";
	}
}
		
		
