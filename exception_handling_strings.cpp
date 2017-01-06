#include<iostream>
#include<strings.h>
#include<cstring>

using namespace std;

int main()
{
	char str[100],str1[100];
	
	cin>>str>>str1;
	
	try
	{
		if(strcmp(str,str1)==0)
		throw "equal";
		
		else 
		{
			strcat(str,str1);
			cout<<str<<endl;
		}
	}
	
	catch(const char *msg)
	{
		cout<<"the strings are"<<msg<<endl;
	}
}
