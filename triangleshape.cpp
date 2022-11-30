#include<iostream>
using namespace std;
int main()
{
    int n,col,row;
    char result;

    cout<<"Enter N : ";
    cin>> n;
    for(row = 1; row<=n; row++ ){
        for(col = 1; col<=row; col++){
            cout<< row << " " ;
              //cout<< col << " " ;
              //cout<< "*" << " " ;
                //cout<< "$" << " " ;
             //cout<< col%2 << " ";
             // cout<< row%2 << " ";
             /*result = col + 64 ;
               cout<< result << " ";*/
               /* result = col + 96 ;
               cout<< result << " ";*/

        }
        cout <<endl;
    }
}
