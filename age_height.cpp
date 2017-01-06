#include<iostream>
#include<cstring>
using namespace std;

class person_data
{
	int i,k;
	float j;
int u;	
char str1[100];
	public:
	
	person_data(char str[100],int x,float n)
	{
		strcpy(str1,str);
		i=x;
		j=n;
	}
	
	void cal_age(int k)
	{
		u=k-i;
	}
	
	void cal_ht_cm()
	{
	 j=j*100;
	}
	
	void show_data()
	{
	
	cout<<"the age is"<<u<<"\n";
	cout<<"the height in cms is "<<j<<"\n";
	} 
};


int main()
{	
	person_data p1("RAM",1975,1.05);
	p1.cal_age(2016);
	p1.cal_ht_cm();
	p1.show_data();
	}
	
	
