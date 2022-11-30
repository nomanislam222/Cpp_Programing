#include<iostream>
using namespace std;
int main(){
    int x=3, a=5;
    cout<< +x <<endl << -a <<endl;
    int y = ++x;
    cout<< y <<endl;//4
    cout<< x <<endl;//4

    int b = a++;
    cout<< b <<endl;//5
    cout<< a <<endl;//6
    return 0;



}
