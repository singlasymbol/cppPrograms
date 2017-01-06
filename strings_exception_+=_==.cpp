#include<iostream>

using namespace std;

class string
{
	char str[1000];
	int i,j,k,l;
	
	public:
	
	void get_data()
	{	
	cout<<"enter the string\n";
		cin>>str;
	}
	
	string operator +=(string s)
	{
		try
		{
			if(strcmp(str,s.str)!=1)
			{
				concat(str,s.str);
			}
			
			else
			{
				throw "strings are not same";
				
			}
		}
		
		catch(const char * msg)
		{
			cout<<msg;
		}
	}
	
	
	string operator ==(string s)
	{
		try
		{
			if(strcmp(str,s.str)==1)
			{
				cout<<"strings are same\n";
			}
			
			else
			{
				throw "strings are not same";
				
			}
		}
		
		catch(const char * msg)
		{
			cout<<msg;
		}
	}
};

void main()
{
	string s1,s2;
	s1.get_data();
	s2.get_data();
	
	str+=s2;
	str==s2;
	
}
	
			
