#include<iostream>
using namespace std;
int main()
{

int i,n;
	int x,y,z;

while(1)
{
	cout<<"1.add"<<endl<<"2.Sub"<<endl<<"3.div"<<endl<<"4.mul"<<endl;
	
	cout<<"enter choice\n";
	cin>>n;
	
	switch(n)
	{	
	
	case 1:
	cout<<"enter the numbers\n";
	cin>>x>>y;
	z=x+y;
	cout<<z<<endl;
	break;
	
	
	case 2:
	cout<<"enter the numbers\n";
//	int x,y,z;
	cin>>x>>y;
	z=x-y;
	cout<<z<<endl;
	break;
	
	
	case 3:
	cout<<"enter the numbers\n";
	//int x,y,z;
	cin>>x>>y;
	try
	{
		if(y==0)
		throw "zero";
		
		else
	
	z=x/y;
	cout<<z<<endl;
	}
	
	catch(const char *msg)
	{
		cout<<"not possible because denominator is zero\n";
		}
	break;
	
	
	case 4:
	cout<<"enter the numbers\n";
//	int x,y,z;
	cin>>x>>y;
	z=x*y;
	cout<<z<<endl;
	break;
	
}

}
}
	
