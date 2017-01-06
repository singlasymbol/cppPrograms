#include<iostream>
#include<vector>
#include<algorithm>

main()
{
	vector<int>v(8);

	fill(v.begin(),v.begin()+4,5);

	fill(v.begin()+3,v.end()-2,8);
	
	cout<<"vector contains"<<endl;
	
}
