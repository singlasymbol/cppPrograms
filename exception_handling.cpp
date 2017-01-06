#include<iostream>

using namespace std;


main()
{
	int num;
	cout<<"enter a +ve no"<<endl;
	cin>>num;
	
	try
	{
		if(num==0)
		throw "zero";
		
		else if (num<0)
		throw num;
		
		else
		cout<<"Number is"<<num<<endl;
		
	}
	
/*	catch(int num)
	{
		cout<<num<<" is -ve"<<endl;
		}
		
		catch(const char* msg)
		{
			cout<<"No is"<<msg<<endl;
		}
	*/	
	catch(...)
	{
	cout<<"code not executed\n";
	
	
	}
	
}
