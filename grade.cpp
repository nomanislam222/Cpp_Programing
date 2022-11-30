
#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter Your Marks: ";
    cin>>marks;
    if (marks >= 90 && marks<=100){
        cout<<"A+";
    }
    else if (marks >= 85 && marks<=100){
        cout<<"A";
    }
    else if (marks >= 80 && marks<=100){
        cout<<"B+";
    }
    else if (marks >= 75 && marks<=100){
        cout<<"B";
    }
    else if (marks >= 70 && marks<=100){
        cout<<"C+";
    }
    else if (marks >= 65 && marks<=100){
        cout<<"C";
    }
    else if (marks >= 60 && marks<=100){
        cout<<"D+";
    }
    else if (marks >= 50 && marks<=100){
        cout<<"D";
    }
    else if (marks < 50){
        cout<<"F";
    }
    else{
        cout<<"Enter Valid Marks";
    }
    return 0;
}
