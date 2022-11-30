#include<iostream>
using namespace std;

 class student
    {
    public:
        int id;
        double cgpa;
    };

int main()
{
   student Alim,Sorna;
   Alim.id = 2145453;
   Alim.cgpa = 3.44;
   Sorna.id = 4372809;
   Sorna.cgpa = 3.90;
   cout<< Alim.id<< " "<<Alim.cgpa<<endl;
   cout<< Sorna.id<< " "<<Sorna.cgpa;
}
