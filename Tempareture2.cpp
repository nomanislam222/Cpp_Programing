#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    cout << "Enter the temperature in fahrenheit\n";
    cin >> fahrenheit;
    celsius = 5 * (fahrenheit - 32) / 9;

    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    cout << "The temperature in Celsius    : " << celsius << endl;

    return 0;
}
