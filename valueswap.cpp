#include<iostream>
using namespace std;
int main()
{
    int x=5,y=10,z;
    z=x;
    x=y;
    y=z;
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;
    return 0;
}
