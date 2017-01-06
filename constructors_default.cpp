#include<iostream>

using namespace std;

class numbers
{
	int x;
	public:

	numbers()
	{
		x=0;
	}
	 

	void show_data()
	{
		cout<<x;
	}
	~numbers()
	{
	cout<<i<<" object is being deleted\n";
	i++;
	
	}
};

int main()
{
	numbers n;
	n.show_data();
}
