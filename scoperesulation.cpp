#include<iostream>
using namespace std;
int x = 40;
int main()
{
 int x = 10;
 cout<<x<<endl;
 cout<<::x<<endl;
 ::x = 30;
 cout<<::x;
}
