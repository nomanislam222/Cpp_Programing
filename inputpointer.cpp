#include <iostream>
using namespace std;

int main(){

    int x;
	int *p;

	cout<<"Input a value"<<endl;
	cin>>x;
	p = &x;

    cout<<endl;
	cout << *p <<" (Value of variable) "<<endl;
	cout << p <<" (Address of variable) ";
	 cout<<endl;


	return 0;
}
