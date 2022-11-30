#include<iostream>
using namespace std;

 class student
    {
    public:
        int id;
        student (int id)
         {
      this -> id = id ;
         }
         void display()
         {
             cout<<id;
         }
    };

int main()
{
   student s(22828);
   s.display();

}


