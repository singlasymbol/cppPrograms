#include<iostream>

using namespace std;
class meters;

class kilometers
{	
int x,y,m,n,k;

public:

kilometers()
{
	m=0;
	//y=0;
}


int  get_data()
{
	cout<<"distance is km please\n";
	
	cin>>m;
return m;
}

}k;


class meters
{
int s,x,y,l;
public:	


	meters()
	{
		y=0;
	}
	

	int get_data()
	{
		cout<<"distance is m please\n";	
	
		cin>>y;
		return y;
	}
	
	meters(kilometers k)
	{
		int l=k.get_data();
	cout<<"l is"<<l;		
		l=l*1000;
		s=y+l;
		
	cout<<"the distance in meters is"<<s<<"\n";
	
	}
/*
	void convert()
	{
//		cout<<"l is %d"<<l;
		l=l*1000;
		s=y+l;
	cout<<"the distance in meters is"<<s<<"\n";
	}*/
}u;


int main()
{

	//meters u;
	u.get_data();
	
	
	u=k;
	
	
	//u.convert();
}
	
