#include<iostream>

using namespace std;

class mat1
{
	int i,j,k;
	
	public:
	int arr[100][100];
	int n;
	void get_data()
	{
	cout<<"enter the size of the first matrix\n";
	cin>>n;
	
	cout<<"please enter the elements of the first matrix";
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	}
}s;

class mat2
{

friend class mat1;
	int k,l;

	public:

	int ar[100][100];
	int n;
	
	void get_data()
	{
	cout<<"enter the size of the second matrix\n";
	cin>>n;
	
	cout<<"please enter the elements of the second matrix";
	
	for(k=0;k<n;k++)
	{
		for(l=0;l<n;l++)
		{
			cin>>ar[k][l];
		}
	}
	}
	
	friend void sum(mat1 x,mat2 y)
	{
	int k,l;
int n=3;
		mat2 r;
		
		for(k=0;k<n;k++)
		{
			for(l=0;l<n;l++)
			{
				r.ar[k][l]=x.arr[k][l]+y.ar[k][l];
			}
		}
		for(k=0;k<n;k++)
	{
		for(l=0;l<n;l++)
		{
			cout<<r.ar[k][l];
		}
	}
	
	}
	
		
}t,r;

	int  main()
	{
		s.get_data();
		t.get_data();
		
		r.sum(mat1 s,mat2 t);
	}
		
