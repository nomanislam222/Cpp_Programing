#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter Your Marks: ";
    cin>>marks;
    if (marks >= 50 && marks <= 100){
        cout<<"Congrats!! You are Passed";

    }
    else if(marks > 100){
        cout<<"Opps!! Unvalid Number";
    }


     else{
        cout<<"Opps!! You are Failed";
    }
    return 0;
}
