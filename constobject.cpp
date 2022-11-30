#include<iostream>
using namespace std;

 class sum
{
    public:
    void display() const
    {
    cout<< "Constant Function"  <<endl;
    }
     void display2()
    {
    cout<< "Non-Constant Function"  <<endl;
    }

};

int main()
{
   const sum data1;
   data1.display();
   //data1.display2();
    sum data2;
   data2.display2();


}

