#include<iostream>
using namespace std;

 class Base
    {
    public:
         Base(){
         cout<<"Constractor Base"<<endl;
         }
         ~Base(){
         cout<<"Destractor Base"<<endl;
         }
    };
     class Derived: public Base
    {
        int j;
    public:
         Derived(int x){
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
   return 0;
}

