#include <iostream>
using namespace std;

int main(){
   int A [10] = {10, -2, 9,-4, -6, -7, 12, 14, 19, -20};
   int positive=0,negative=0,zero=0;

    for(int i = 0; i <=9; i++)
        {
            if(A[i] < 0)
            {
                negative++;
            }
            else if(A[i] > 0)
            {
                positive++;
            }
            else
            {
                zero++;
            }
        }
        cout<<"Total Positive Numbers: "<<positive<<endl;
        cout<<"Total Negative Numbers: "<<negative<<endl;
        cout<<"Total Zero Numbers: "<<zero<<endl;

    return 0;
}
