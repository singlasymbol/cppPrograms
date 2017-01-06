#include<iostream>
#include<vector>
#include<algorithm>

main()
{
	vector<int>v(8,10);

	fill_n(v.begin(),4,5);

	fill_n(v.begin()+3,3,38);
	
	cout<<"vector contains"<<endl;
	
}
