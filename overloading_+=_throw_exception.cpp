#include<iostream>

using namespace std;

class matrix
{
	int rows;
	
	int cols;
	
	int a[10][10];
	
	public:
	
	matrix(int r,int c)
	{
		rows=r;
		cols=c;
	}
	
	void read_matrix()
	{
		for(int  i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				cin>>a[i][j];
			}
		}
	}
	
	
	void display_matrix()
	{
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
			cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	matrix operator+=(matrix &m)
	{
		if(rows!=m.rows|| cols!=m.cols)
		throw "error";
		
		else
		{
			for(int i=0;i<rows;i++)
			{
				for(int j=0;j<cols;j++)
				{
					a[i][j]=m.a[i][j];
				}
			}
		}
	}
};

main()
{
	int r,c;
	cout<<"enter row and column of 1st matrix\n";
	cin>>r>>c;
	
	matrix obj1(r,c);
	
	obj1.read_matrix();
	
	cout<<"entern rows and columns of 2nd matrix\n";
	cin>>r>>c;
	matrix obj2(r,c);
	obj2.read_matrix();
	
	try
	{
		obj1+=obj2;
		cout<<"Resultant is\n";
		obj1.display_matrix();
	}	
		catch(const char * msg)
		{
		cout<<msg;
		}
	
	
}				
