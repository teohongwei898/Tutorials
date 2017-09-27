#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    //enter no.1 and no.2
    int no1;
    int no2;
    cout << "Enter Number 1";
    cin >> no1;
    cout<<"Enter Number 2";
    cin>> no2;
    //results
    if (no1>no2)
    {
        cout<<"No.1 is bigger than No.2" <<endl;

    }
    if (no2>no1)
        {
        cout<<"No1. is lesser than No.2"<<endl;
    }
    else
    {
        cout<< "No.1 equals to No.2"<<endl;
    }
    //terminate
    cout <<"Press Enter to continue.." <<endl;
    cin.ignore(10, '\n')
    cin.get
    return 0;
}
