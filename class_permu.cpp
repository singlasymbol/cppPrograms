#include<iostream>

using namespace std;

class per
{
	public:
	int num;
	int sub;


	
friend void permu(per t1)
{
	int i,j,k;
	int u,r;

	 int fact(int x)
	 {
		int i,sum=1;
		for(i=2;i<=x;i++)	
		{
			sum=sum*i;
		}
		return sum;
	 }

	j=fact(t1.num);
	k=fact(t1.num-t1.sub);
	
	cout<<"the permutation is "<<j/k<<"\n";
	
}
}y;



int main()
{
	int i,j,k;
	
	cout<<"enter both numbers\n";
	cin>>y.num>>y.sub;
	
	permu(y);
}
