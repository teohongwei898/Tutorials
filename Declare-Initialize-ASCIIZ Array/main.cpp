#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
//display string one char at a time
void displaystring(char szString[])

{
    for(int index=0; szString[index] != '\0'; index++)
    {
        cout << szString[index];
    }
}

int main(int nNumberofArgs, char* pszArgs[])
{
    char szName1[] = {'S','t','e','p','h','e','n','\0'};
    char szName2[] = "Stephen";
    cout << "Output szName1:";
    displaystring(szName1);
    cout << endl;

    cout<<"Output szName2: ";
    displaystring(szName2);
    cout << endl;
    //terminate
    cout<< "Press Enter to continue.."<<endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
