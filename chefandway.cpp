#include<iostream>

using namespace std;

int main()
{

long long int i,x,y,mul=1,j,k,l,arr[1000000],t,r,n;
cin>>n>>k;

for(i=0;i<n;i++)
cin>>arr[i];

j=n;
y=arr[j];

while(j!=1)
{
	
	while((y-arr[j-1])<k)
	{
		j--;
	}
cout<<"abc\n";	
	mul=mul*arr[j];
	y=arr[j];
}

cout<<mul;
}
	
