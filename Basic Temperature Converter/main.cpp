//To convert temperature from Celsius to Fahrenheit
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    //enter temperature in C
    int celsius;
    cout << "Hello! Please enter the temperature in Celsius!" << endl;
    cin >> celsius;
    //conversion
    int fahrenheit;
    fahrenheit = celsius * 9/5 +32;
    //output results
    cout << "Fahrenheit value is:";
    cout << fahrenheit << endl;
    //wait for termination
    cout << "Press Enter to continue and terminate this program." << endl;
    cin.ignore (10, '\n');
    cin.get();
    return 0;
}
