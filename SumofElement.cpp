#include<iostream>
using namespace std;
int main()
{
    int element[5], i, sum = 0;
    int *p;

    cout << "Enter Five Numbers :";
    for (i = 0; i < 5; i++)
    {
        cin >> element[i];
    }

    p = element;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *(p + i);
    }

    cout << "Sum of Elements :" << sum;

    return 0;
}
