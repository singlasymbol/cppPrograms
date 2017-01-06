#include<iostream>

using namespace std;

class numbers
{
int x;
public:

numbers(int i)
{
x=i;
}

void show_data()
{
cout<<x;
}
};

int main()
{
numbers n(10);
n.show_data();
}
