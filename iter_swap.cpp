#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

main()
{
	int a[]={10,20,30,40,50};
	vector<int>v(4,99);
	
	iter_swap(a,v.begin());
	
	iter_swap(a+3,v.begin()+2);

//	iterator i;
	vector *i;
	 
	for(i=v.begin();i<=v.end();i++)
	cout<<*i;
	
}
