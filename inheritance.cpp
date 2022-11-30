#include<iostream>
using namespace std;

 class Person
    {
    public:
        string name;
        int mobile;
         void display1()
         {
         cout<<name<<endl<<mobile<<endl;
         }
    };

     class Student:public Person
    {
    public:
         int id;
         void display2()
         {

         cout<<endl;
          display1();
          cout<<id<<endl;
         }
    };

int main()
{
   Person Alim;
   Alim.name = "noman" ;
   Alim.mobile = 281921919;
   Alim.display1();

   Student Nur;
   Nur.name = "Rony" ;
   Nur.mobile = 171921919;
   Nur.id =92202;
   Nur.display2();

}


