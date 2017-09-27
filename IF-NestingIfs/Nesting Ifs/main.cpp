#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    //enter birth year
    int nyear;
    cout << "Enter your birth year";
    cin >> nyear
    //results
    if (nyear>2000)
    {
        cout<<"You were born in 21st century" <<endl;
    else
    {
        cout<<"You were born in ";
        if (nyear<1950);
        {
        cout <<"the first half";
        }
        else
        {
            cout <<"the second half";
        }
        cout << " of the 20th century" << endl;
    }

    //terminate
    cout <<"Press Enter to continue.." <<endl;
    cin.ignore(10, '\n')
    cin.get
    return 0;
}
