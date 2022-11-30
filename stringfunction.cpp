#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name1[]= "Noman";
    char name2[]= " Islam";
    char name3[100];


     int len = strlen(name1);
    cout<<"string Length: "<<len<<endl;
    strcpy(name3,name1);
    cout<<"Copy Name: "<< name3<<endl;
    strcat(name2, name1);
    cout<<"Concatanation Name: "<< name2<<endl;
    strupr(name1);
    cout<<"UpperCase Name: "<< name1<<endl;
    strlwr(name2);
    cout<<"Lowercase Name: "<< name2<<endl;

    int value=strcmp(name1,name2); //compares first string with the second string
    cout<<value<<endl;

    if(value==0)
    {
        cout<<"Strings are matched"<<endl;
    }

    else
    {
        cout<<"Strings are not matched"<<endl;
    }


}

