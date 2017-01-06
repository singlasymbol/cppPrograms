#include<iostream>

using namespace std;


class matrix
{
	int size;
	int arr[100][100];
	public:
	
	int i,j,k;
	
	matrix(int n)
	{
		size=n;
	}
	
	friend istream & operator>>(istream &input,matrix &d)
	{
		
		for(int i=0;i<d.size;i++)
		{
			for(int j=0;j<d.size;j++)
			{
				cout<<"enter the "<<i<<" "<<j<<"element of matix\n";
				input>>d.arr[i][j];
				
			}
		}
		return input;
	}
		
	friend ostream & operator<<(ostream &output,matrix &d)
	{
		
		for(int i=0;i<d.size;i++)
		{
			for(int j=0;j<d.size;j++)
			{
				output<<d.arr[i][j]<<" ";
				
			}
			cout<<endl;
			
		}
		cout<<"\n";
		return output;
	}
	
	
	
	friend int operator +(matrix &d1.arr,matrix &d2.arr)
	{
		matrix d3;
		
		for(int i=0;i<d.size;i++)
		{
			for(int j=0;j<d.size;j++)
			{
			cout<<i<<","<<j<<"element after adding is"d1.arr[i][j]+d2.arr[i][j]<<endl;
				
				
			}
		}
	}
	return 0;
};
	int main()
	{
		matrix m1(2),m2(2),m3(2);
		cin>>m1;
		cin>>m2;
		
		cout<<m1;
		cout<<m2;
	
	 m3=	m1+m2;
	
	}
	
	
	
