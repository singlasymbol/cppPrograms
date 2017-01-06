#include<iostream>

using namespace std;

int main()
{
	cout<<"enter the size of array";
	int n;
	cin>>n;
	int i,j,k,l,a[n];
	
	int *ptr;
	
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	int sum=0;
	ptr=a;
	
	for(i=0;i<n;i++)
	{
		sum=sum+*ptr;
		*(ptr++);
	}
	
	cout<<"the sum is "<<sum<<"\n";
}
