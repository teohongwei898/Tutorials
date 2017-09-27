#include <iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

int main(int nNumberofArgs, char* pszArg[])
{
 //ask user for value
    int nValue;
    cout << "Enter decimal value of a character to print.!" << endl;
    cin >> nValue;
    //print value
    char cValue = (char)nValue
    cout << "The character you entered was: [ " <<cValue<<"] " <<endl;
    //terminate
    cout<<"Press Enter to continue.."<< endl;
    cin.ignore(10, '\n');
    cin.get
    return 0;
}
