#include<iostream>

using namespace std;

class Id_generator
{
   private:
   
   static int next_id;
   
   public:
   
   static int gen_nextid()
   {
   		cout<<"Next id is ="<<next_id++;
 	}
};
   		
   int Id_generator::next_id=1;
   
   int main()
   {
   Id_generator a,b;		
   
   for(int i=0;i<5;i++)
   {
   
   Id_generator::gen_nextid();
   }
   }
