#include<iostream>
using namespace std;

 class Base
    {
        int i;
    public:
         Base(int y){
         cout<<"Constractor Base"<<endl;
         i = y;
         }
         ~Base(){
         cout<<"Destractor Base"<<endl;
         }
         void showi(){cout<<i<<endl;}
    };
     class Derived: public Base
    {
        int j;
    public:
         Derived(int x): Base (x)
         {
         cout<<"Constractor Derived"<<endl;
             j = x;
         }
         ~Derived(){
         cout<<"Destractor Derived"<<endl;
         }
         void showj(){cout<<j<<endl;}
    };

int main()
{
   Derived ob(10);
   ob.showj();
   ob.showi();
   return 0;
}

