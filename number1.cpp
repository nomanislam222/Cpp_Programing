#include<iostream>
using namespace std;
int main()
{
    float cgpa;
    int drop, lowerb, scholar;

    cout<<"Please Enter your CGPA : ";
    cin>> cgpa;
    cout<<"Enter the number of Grade lower than B+ : ";
    cin>> lowerb;
    cout<<"Enter the number of Course Drop : ";
    cin>> drop;
    cout<<endl;

    if(cgpa >= 3.75 && lowerb==0 && drop==0){
        cout<<"Your CGPA: "<< cgpa <<endl;
        cout<<"Number of Grade lower than B+: "<< lowerb<<endl;
        cout<<"Number of Course Drop: "<< lowerb <<endl;
        cout<<"You are Applicable for 45% Financial AID";
    }
    else if(cgpa >= 3.65 && lowerb==0 && drop<=1)
    {
        cout<<"Your CGPA: "<< cgpa <<endl;
        cout<<"Number of Grade lower than B+: "<< lowerb<<endl;
        cout<<"Number of Course Drop: "<< lowerb <<endl;
        cout<<"You are Applicable for 20% Financial AID";
    }
     else if(cgpa >= 3.50 && lowerb>=0 && drop<=3)
    {
        cout<<"Your CGPA: "<< cgpa <<endl;
        cout<<"Number of Grade lower than B+: "<< lowerb<<endl;
        cout<<"Number of Course Drop: "<< lowerb <<endl;
        cout<<"You are Applicable for 10% Financial AID";
    }
    else
    {
     cout<<"Sorry!! You are not Applicable for Scholarship or Financial AID";
    }



}
