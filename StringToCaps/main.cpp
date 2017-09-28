#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
void toupper (char sztarget[], int ntargetsize)
{
    for (int nt=0;
    nt < (ntargetsize - 1)&& sztarget[nt] != '\0'; nt++)
    {
        sztarget[nt] = toupper(sztarget[nt]);
    }
}
int main()
{
    cout << "Enter string" ;
    char szstring[256];
    cin.getline(szstring, 256);
    toupper(szstring, 256);
    cout<< "All caps version: <"
    << szstring
    << ">"<<endl;

        return 0;
}
