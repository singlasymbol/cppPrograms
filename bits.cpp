#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int x,y,n,arr[100];
	cout<<"enter the number\n";
	
	cin>>n;

	cout<<"enter the bits you want to replace";
	
	cin>>x>>y;

	int i,q,w,e,r;
	
	for(i=0;i<32;i++)
	{
		arr[31-i]=(n>>i)&1;	
	}
	e=arr[x-1];
	arr[x-1]=arr[y-1];
	arr[y-1]=e;
	
/*	for(i=0;i<32;i++)
	{
//		arr[31-i]=(n>>i)&1;	
	cout << arr[i];
	}*/
	int sum=0;
	for(i=31;i>=0;i--)
	{
		q=arr[i]*pow(2,31-i);
		sum=sum+q;	
	}
	
	cout<<sum;
	}
