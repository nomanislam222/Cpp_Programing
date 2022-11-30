#include<iostream>
using namespace std;

void addition(int, int);
void multiplication(int, int);
void division(float, float);

int main()
{
    addition(10,20);
    multiplication(10,10);
    division(20,3);
}

void addition(int a, int b)
{
    int sum = a + b;
    cout<< "Addition : "<< sum<<endl;
}

void multiplication(int a, int b)
{
    int mul = a * b;
    cout<< "Multiplication : "<< mul<<endl;
}

void division(float a, float b)
{
    float div = a / b;
    cout<< "Division : "<< div<<endl;
}
