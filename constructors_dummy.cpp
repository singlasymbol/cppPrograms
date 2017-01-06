#include<iostream>

using namespace std;

class numbers
{
	int x;
	public:
	void get_data()
	{
		cin>>x;
	}

};

int main()
{
	numbers n;
	n.get_data();
}
