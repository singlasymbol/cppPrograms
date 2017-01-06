#include<iostream>
#include<cstring>
using namespace std;

class school
{
char str[50];
float x;
public:

school(char *str1,float p)
{
x=p;
strcpy(str,str1);
}

school(school &s)
{
x=s.x;
strcpy(str,s.str);
}

void display()
{
cout<<"The fee is Rs."<<x<<" for classnursery"<<endl;
}
};

int main()
{
     char str1[20];float p;
       cin>>str1;
       cin>>p;
    school a1(str1,p);
    school a2(a1);
    school a3(a2);
    cout<<"For admission in smartwonder";
    a1.display();
    cout<<"For admission in kindergarten";
    a2.display();
    cout<<"For admission in kidscamp";
    a3.display();
    return 0;
}
