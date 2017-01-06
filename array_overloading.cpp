#include<iostream>

using namespace std;

class array
{
	int i,j,k,l;
	int arr[100];
	int size;

	public:
	int n;
	
	array(int n)
	{
		size=n;
//		return size;
	}
	
	//int arr[size];
array()
{
}
	
	void get_data()
	{
//cout<<"enter the array size\n";

//	cin>>size;
		cout<<"enter the elements\n";
		for(i=0;i<size;i++)
		cin>>arr[i];
		
	}
	
	void show_data()
	{
	cout<<"\n";
		for(i=0;i<size;i++)
		{
					
			cout<<arr[i];
		}
	}
	
	
	array operator +(array &t)
	{
		array A3;
		A3.size=size;
		for(i=0;i<size;i++)
		{
			A3.arr[i]=arr[i]+t.arr[i];
		}
		
		cout<<"\n";
/*		for(i=0;i<size;i++)
		{
					
			cout<<A3.arr[i];
		}*/
		return A3;
	}
}A1,A3,A2;

int main()
{
//array A4;
int n;
cout<<"enter the array size\n";
	cin>>n;
	array A1(n),A2(n),A3;
	
//	array A1(n),A2(n);
	A1.get_data();
	A2.get_data();
	A1.show_data();
A2.show_data();
	 
	A3=A1+A2;
A3.show_data();
}	
	
	
