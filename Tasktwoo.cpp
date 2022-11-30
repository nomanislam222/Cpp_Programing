#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char Name[8]={'M','a','s','h','r','a','f','e'};
    int i=0;

    while(i <= 7)
    {
        cout << Name[i] << "=" << i <<endl;
        i++;
    }

    return 0;
}
