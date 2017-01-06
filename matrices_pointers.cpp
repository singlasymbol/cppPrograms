#include<iostream>

using namespace std;

int main()
{
cout<<"enter the size of arrays\n";
int n;
cin>>n;
int i,j,k; 
int sum[n][n],arr[n][n],str[n][n];

int *p,*t;

cout<<"enter the elements of first array,please\n";

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		cin>>arr[i][j];
	}
}
cout<<"enter the elements of second array,please\n";
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		cin>>str[i][j];
	}
}
	
for(i=0;i<n;i++)
{

	t=&str[i][0];
	p=&arr[i][0];

	for(j=0;j<n;j++)
	{
		sum[i][j]=*t+*p;	
		t++;
		p++;
	}	
}

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		cout<<sum[i][j]<<"  ";
	}
	cout<<"\n";
}
}

	
	
