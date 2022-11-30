#include<iostream>
using namespace std;

 class student
    {
    public:
        int id;
        double cgpa;

         void display(int id, double cgpa){
         cout<< id<< " "<<cgpa<<endl;
         }
    };

int main()
{
   student Alim,Sorna;

   /*Alim.id = 2145453;
   Alim.cgpa = 3.44;
   Alim.display();

   Sorna.id = 4372809;
   Sorna.cgpa = 3.90;
   Sorna.display();*/
   Alim.display(2145453,3.44);
   Sorna.display(2145453,3.44);
}
