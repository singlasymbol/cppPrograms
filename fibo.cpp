#include<iostream>
using namespace std;

class fib
{
//int k;
public:		int p;
	void series(int  i,int j,int n)
 	{	
		int k;
		k=j+i;
		cout<<k<<"\t";
		i=j;
		j=k;
	
		while(k<n)
		{
			series(i,j,n);
			//return p;
		}
 	}
}a;
	
main()
{
int i=1;
int j=1;
int n;
cout<<"the number upto which you want the series"<<"\n";
cin>>n;

cout<<i<<"\t"<< j<<"\t";
a.series(i,j,n);

}




