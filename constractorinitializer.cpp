#include<iostream>
using namespace std;

 class student
    {
    public:
         const int id;
         const int fee;
         double cgpa;

         student(int x, int y, double z)
         :id(x), fee(y)
         {
             cgpa = z;
             cout<<x<<endl<<y<<endl<<z;
         }
    };

int main()
{
   student Alim(2145453,5000,3.44);

}

