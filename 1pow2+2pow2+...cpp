#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int sum =0,n;
    cout<<"Enter the last number";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum = sum + pow(i,2);
    }
    cout<<sum;
}
