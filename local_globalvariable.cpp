#include<iostream>
using namespace std;
int x = 40; //global
void display()
{
    cout<<x;
}
int main()
{
 //int x=10;//Local
 cout<<x<<endl;
 display();
}

