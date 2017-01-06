#include<iostream>
 using namespace std;
int greatest(int a,int b,int c)
{
if(a==b && a==c)
{
cout<<"all are equal"<<"\n";
}
else
{ 	
	if( a > b && a > c ) 
	{
	
		cout<<"the greater number is"<< a ;
		
	}
	
	else if(b > a && b > c)
	{
	
	cout << "the greater number is " << b;
	
	}
	
	else
	{
	
	cout<<"the greatest number is "<<c;
	}
}
//return 0;	
}
	
int main()
{

	int a,b,c;
	cout<<"enter all thrree numbers"<<"\n";
	cin >> a >> b >>c;
	
	greatest(a,b,c);
	return 0;
	
}

