#include<iostream>

using namespace std;


void check(int k) throw(int ,double)
{
	if(k==1)
	throw (int)'k';
	
	if(k==2)
	throw k;
	
	if(k==-2)
	throw 1.0;
	
	cout<<"end of function\n";
}


main()
{
	try
	{
		cout<<"k==1"<<endl;
		check(1);
	
		cout<<"k==2"<<endl;
		check(2);
		
		cout<<"k==3"<<endl;
		check(-2);
	}
	
	catch(char g)
	{
	cout<<"character exception\n";
	}
	
	catch(int j)
	{
	cout<<"integer exception\n";
	}
	
	catch(double s)
	{
	cout<<"double exception\n";
	}
}
	
		
