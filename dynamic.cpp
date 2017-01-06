#include<iostream>
using namespace std;
class array_class
{
	int *arr;
	int n;
	
	public:
	
	array_class()
	{
		n=0;
	}
	
	array_class(int);
	void show_data();
};

array_class::array_class(int num)
{
	n=num;
	
	arr=new int[n];
	
	cout<<"enter elements";
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}

void array_class::show_data()
{

for(int i=0;i<n;i++)
cout<<arr[i];
}

main()
{
	int size;
	cout<<"enter the size of the array";
	cin>>size;
	
	array_class arr(size);
	arr.show_data();
}
