#include<iostream>
using namespace std;
int main()
{
    int n;
    float lowest,seclowest;

       cout<<"Enter Number of students : ";
       cin>> n;
       float marks[n];

       for(int i=0; i<n; i++){
           cout<<"Marks of student " << i +1 <<" = " ;
           cin>>marks[i];
           }

           if (marks[0]<marks[1]){
                lowest=marks[0];
                seclowest=marks[1];
                }
           else{
                lowest=marks[1];
                seclowest=marks[0];
                }

        for(int i=2; i<n; i++){
            if(marks[i]<lowest){
                seclowest=lowest;
                lowest=marks[i];
                }
            else if(marks[i]<seclowest){
                    seclowest=marks[i];
            }
            }
            cout<<endl;
            cout<<"Lowest Mark is:"<<lowest<<endl;
            cout<<"Second Lowest Mark is:"<<seclowest<<endl;
            return 0;
}
