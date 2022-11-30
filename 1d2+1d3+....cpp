#include<iostream>
using namespace std;
int main()
{
    double sum =0,n;
    cout<<"Enter the last number";
    cin>>n;
    for(double i=2; i<=n; i++)
    {
        sum = sum + (1/i);
    }
    cout<<sum;
}
