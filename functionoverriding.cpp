#include<iostream>
using namespace std;

 class Person
    {
    public:
         void display()
         {
         cout<<"Person Class"<<endl;
         }
    };

     class Student: public Person
    {
    public:
         void display()
         {
       cout<<"Student Class"<<endl;
         }
    };

int main()
{
   Person Alim;
   Alim.display();

   Student Nur;
   Nur.display();

}



