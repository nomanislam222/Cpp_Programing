#include<iostream>
using namespace std;
int main()
{
    int sum =0,n;
    cout<<"Enter the last number";
    cin>>n;
    for(int i=0; i<=n; i= i+2)
    {
        sum = sum + i;
    }
    cout<<sum;
}
