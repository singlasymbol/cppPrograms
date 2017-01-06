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
	int odd=0,even=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			odd++;
		}
		
		else
		even++;
	}
	
	cout<<"the number of even elements are"<<even<<"\n";
	cout<<"the number of odd elements are"<<odd<<"\n";
	
}
main()
{
	int size;
	cout<<"enter the size of the array";
	cin>>size;
	
	array_class arr(size);
	arr.show_data();
}


	
