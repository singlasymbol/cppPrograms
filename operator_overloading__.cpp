#include<iostream>

using namespace std;

class  number
{
	int x;
	
	public:
	
	number(int n)
	{
		x=n;
	}
	
	void operator *()
	{
		x=-x;
	}
	
	
	void show_data()
	{
		cout<<x<<"\n";
	}
};


int main()
{
	number N(7);
	N.show_data();
	*N;
	N.show_data();
	return 0;
}
