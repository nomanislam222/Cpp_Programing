#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,large;
    cout<<"Enter 3 digits:";
    cin>> num1 >> num2 >> num3;
    if(num1 > num2 && num1 > num3){
        large = num1;
    }
    else if(num2 > num1 && num2 > num3){
        large = num2;
    }
    else{
        large = num3;
    }
    cout<<"Large Number:" << large;
    return 0;
}

