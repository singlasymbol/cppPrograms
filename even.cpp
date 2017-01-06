#include<iostream>

using namespace std;

int even(int a)
{
 //int a;
 
 if(a%2==0)
 {
  cout<<"the number is even"<<"\n";
  }
  
  else
  {
  cout<<"the number is odd"<<"\n";
  }
 }
  
  int main()
  {
  int a;
  cin>>a;
  
  even(a);
  
  return 0;
  }
