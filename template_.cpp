#include<iostream>

using namespace std;


template<class type>

class sample
{
	type val;

	public:

	static int count;

	sample()
	{
		count++;
	}

		static void show()	
		{
			cout<<count;
		}
};

int sample<type>::count=0;

main()
{
	sample<int>obj1;
	sample<int>obj2;
	sample<int>obj3;
	
	sample<double>obj1;
	sample<double>obj2;
	sample<double>obj3;
	
	sample<char>obj1;
	sample<char>obj2;
	sample<char>obj3;
	
	sample<int>::show();
	
	sample<double>::show();
	
	sample<char>::show();
	}
	
	
	
