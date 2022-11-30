#include<iostream>
using namespace std;
int main()
{
    int result[5];
           for(int i=0; i<5; i++){
            cout<<"Result of student " << i +1 <<" = " ;
            cin>>result[i];
        }

        for(int i=0; i<5; i++){
            cout<<result[i]<<endl;
        }
}
