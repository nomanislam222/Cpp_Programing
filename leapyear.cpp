#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter Any Year: ";
    cin>>year;
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        cout<<"It's a Leap Year";
    }
    else{
        cout<<"Opps!! It's not a Leap Year";
    }
    return 0;
}
