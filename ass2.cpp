#include<iostream>

using namespace std;

class call
{
	int i,k;
//	static int n;
	public:
	int j;
	void get_data()
	{
		cout<<"enter the  number please"<<"\n";
//		n++;
		cin>>j;
	}
	
	void swap(call &s1,call &s2)
	{
		call temp;
		
		temp.j = s1.j;
		
		s1.j = s2.j;
		
		s2.j = temp.j;

	
	}
	
}t1,t2;

int main()
{
	t1.get_data();
	t2.get_data();
	
		
	swap(t1,t2);

	cout<<"after swapping,the numbers are"<<t1.j<< "   "<<t2.j;
}

