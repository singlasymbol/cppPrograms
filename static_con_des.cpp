#include<iostream>

using namespace std;

class sample
{
	static int no;
	
	public:
	sample()
	{
		no++;
		
		cout<<"Number of objects exists:"<<no<<"\n";
		
	}
	
	~sample()
	{
	no--;
	cout<<"number of objects that exist are:"<<no<<"\n";
	}
};

int sample::no=0;

main()
{
	sample a,b,c,d;
	cout<<"press any key to destroy the object"<<"\n";
}
