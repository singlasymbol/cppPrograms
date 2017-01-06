#include<iostream>

using namespace std;


int main()
{
	int n;
	cout<<"enter the size of array";
	cin>> n;

	int arr[n];

	cout<<"enter the numbers\n";

	for(int i=0;i<n;i++)
	{	
		cin>>arr[i];
	}
	int *p,sum=0,k;
	p=arr;
	
	for(int i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	cout<<sum;
	k=sum/n;
	cout<<"the avg is"<<k<<"\n";
}
