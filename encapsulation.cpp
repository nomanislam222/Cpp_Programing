#include<iostream>
using namespace std;

 class student
    {
    private:
        int id;
    public:
         void setid(int x)
         {
         id =x;
         }
         int getid()
         {
             return id;
         }
    };

int main()
{
   student Alim;
   Alim.setid(2827298);
   cout<<Alim.getid();
}

