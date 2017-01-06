#include<iostream>

using namespace std;

int main()
{

float amount;

float value(float p,int time,float r=0.15);

amount=value(5000.00,5);

cout<<"final value="<<amount<<endl;

amount = value(5000.00,5,0.10);

cout<<"final value after changing  rate is"<< amount <<endl;

return 0;
}

float value(float p,int time,float r)
{

float sum;

sum=(p*time*r)/100;

return sum;
}
