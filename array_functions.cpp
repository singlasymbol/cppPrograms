#include<iostream>

using namespace std;

void small(int *t,int n,int smallest,int pos)
{
int i;
	for(i=0;i<n;i++)
	{
		if(*(t+i)<smallest)
		{
			smallest=*(t+i);
			pos=i;
		}
	}
	cout<<"the smallest element is"<<smallest<<"at position"<<pos+1;
}

int main()
{
int i,n;
cout<<"enter the size of array\n";
cin>>n;
int arr[n];

for(i=0;i<n;i++)
{
cin>>arr[i];
}
int smallest=arr[0];
int pos=0;
small(arr,n,smallest,pos);
return 0;
}
	 
	 
	 
