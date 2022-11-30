#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char name[100];
    cout<< "Enter Your Name :"<<endl;
    //cin>>name;
    gets(name);
    cout<<endl<<endl;
    cout<< "Your Name: "<< name<<endl;
}
