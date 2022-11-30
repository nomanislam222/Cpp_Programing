#include <iostream>
using namespace std;

int main()
{
   int print[100], number;
   cout << "Enter Number of elements"<<endl;
   cin >> number;
   cout << "Enter " << number << " Elements"<<endl;

   for(int i = 0; i < number; ++i){
        cin >> print[i];
        }

   cout << "Elements Are: "<<endl;

   for(int i = 0; i < number; ++i){
        cout << *(print+i) << " ";
        }

   return 0;
}
