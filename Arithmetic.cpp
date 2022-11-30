#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter 2 Numbers";
    cin>> num1 >> num2;

    cout<<showpoint;
    cout<< fixed;
    cout<<setprecision(2);


    float sum = num1 + num2;
    cout<<"Sum is: " << sum <<endl;

     float sub = num1 - num2;
    cout<<"Sub is: " << sub <<endl;

     float mul = num1 * num2;
    cout<<"Multiplication is: " << mul <<endl;


     double div = num1 / num2;
    cout<<"Division is: " << div <<endl;

     int rem = num1 % num2;
    cout<<"Reminder is: " << rem <<endl;
    return 0;

}
