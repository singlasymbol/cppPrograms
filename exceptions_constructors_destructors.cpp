#include<iostream>

using namespace std;

class number
{

float x;
public:
number(float);
number(){}

~number()
{
cout<<"in destructor\n";
}

void operator ++(int)
{
x++;
}

void operator --()
{
	--x;
}


void show()
{
cout<<"\nx="<<x<<endl;
}
};

number::number(float k)
{
	if(k==0)
	throw number();
	
	else
	x=k;
}

main()
{
try{
number N(2.4);

cout<<"before incrementing\n";
N.show();

cout<<"after incrementing\n";
N++;
N.show();

cout<<"after decrementing\n";
--N;

N.show();

number N1(0);
}

catch(number)
{
cout<<"invalid  no\n";

}
}
