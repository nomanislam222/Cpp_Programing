#include<iostream>
using namespace std;

 class student
    {
    public:
        int id;
        double cgpa;
         void display(){
         cout<< id<< " "<<cgpa<<endl;
         }
         student(int x, double y){
         id = x;
         cgpa = y;
         }
    };

int main()
{
   student Alim(2145453,3.44);
   Alim.display();
   student Sorna(2145453,3.44);
   Sorna.display();
}

