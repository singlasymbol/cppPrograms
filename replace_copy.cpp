#include<iostream>
#include<vector>
#include<algorithm>
main()
{
	int a[]={1,2,3,4,5,6,7};
	
	vector<int>v(8);
	
	replace_copy(a,a+8,30,75);
	
	//print vector
	 iterator i=v.begin();
	 
	while(i!=v.end())
	{	
		cout<<*i;
		i++;
	}
}
	
