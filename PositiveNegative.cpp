#include <iostream>
using namespace std;

int main(){
    int digit;
    cout<<"Enter Any Digits: ";
    cin>>digit;
    if (digit > 0){
        cout<<"It's a positive Digit";
    }
     else if(digit < 0){
        cout<<"It's a negative Digit";
     }

    else{
        cout<<"Opps!! Unvalid";
    }
    return 0;
}
