#include<iostream>
using namespace std;

 class sum
{
    public:
    void display(int a, int b){
    cout<< a+b <<endl;
         }

};

int main()
{
   sum data;
  // data.display(10,10);
   sum *p = &data;
   p -> display(5,10);


}

