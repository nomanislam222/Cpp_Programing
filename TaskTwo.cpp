#include <iostream>
using namespace std;

int main(){
    cout<<"Mashrafe"<<endl;
    char Name[]={'M','a','s','h','r','a','f','e'};
    for(int i=0; i<=7; i++){
        cout<<Name[i];
        switch (Name[i])
        {
        case 'M':
            cout<<" = 77"<<endl;
            break;
        case 'a':
            cout<<" = 97"<<endl;
            break;
        case 's':
            cout<<" = 115"<<endl;
            break;
        case 'h':
            cout<<" = 104"<<endl;
            break;
        case 'r':
            cout<<" = 114"<<endl;
            break;
        case 'f':
            cout<<" = 102"<<endl;
            break;
        case 'e':
            cout<<" = 101"<<endl;
            break;
        default:
            cout<<"Invalid";

        }
    }

    return 0;
}

