#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
	int a={10,20,30,40,50,4,5,6};
	vector<int>v(a,a+8);
	
	replace(v.begin(),v.end(),20,99);
	
	cout<<"vector contains"<<endl;
	
	for(i=v.begin();i<=v.end();i++)
	cout<<i;
	
	
}
