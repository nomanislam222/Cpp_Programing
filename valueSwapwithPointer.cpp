#include<iostream>
using namespace std;
int main()
{
    int x=5,y=10,z;
    int *p1, *p2;

    p1 = &x;
    p2 = &y;

    z = *p1;
    *p1 = *p2;
    *p2 = z;

    cout<<"X = "<<*p1<<x<<endl;
    cout<<"Y = "<<*p2<<y<<endl;
    return 0;
}

