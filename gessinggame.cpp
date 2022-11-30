#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int guessnum, randomnum;
    while(1){
    cout<< "Guess A Number (1-5): ";
    cin>>guessnum;

    randomnum = 1 + rand() % 5;

    if( guessnum == randomnum){
        cout<<"You Won!!"<<endl<<endl;

    }else
    {
        cout<<"You Lost!! Try Again"<<endl;
        cout<<"The Number was: "<< randomnum<<endl<<endl;
    }
    }
}
