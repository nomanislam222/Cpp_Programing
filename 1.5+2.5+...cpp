#include<iostream>
using namespace std;
int main()
{
    float sum =0,n;
    cout<<"Enter the last number";
    cin>>n;
    for(float i=1.5; i<=n; i++)
    {
        sum = sum + i;
    }
    cout<<sum;
}
