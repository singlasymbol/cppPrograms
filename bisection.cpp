#include<iostream>
#include<math.h>

using namespace std;

float f(float)
{
float x,y;
y=pow(x,3)-4*x-9;
return y;
}


int main()
{
float n,a,b,i,j,k;
float x,y;
cout<<"number of stages"<<"\n";

cin>>n;

cout<<"enter the initial values"<<"\n";

cin>>a>>b;
float t;
for(i=0;i<n;i++)
{
x=a;
y=b;

int s=f(x);
int r=f(y);
if((s*r)<0)
{	
	t=(a+b)/2;
	cout<<"in first interation t is"<<t<<"\n";	
	if(f(x)<0)
		x=t;
		else
		y=t;
}
}
cout<<"\n"<<f(t)<<"\n";
cout<<t;
	}	
		
	
