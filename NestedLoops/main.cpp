//this creates a multiplication table while demonstrating loops/nested loops
#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    //displays headings
    int ncolumn = 0;
    cout <, " ";
    while (ncolumn<10)
    {
        //set width to 2
        cout.width(2);
        //display column no.
        cout << ncolumn<< " ";
        //+1 column
        ncolumn++;

    }
    cout<< endl;
    //loop through rows
    int nrow = 0
    while (nrow<10)
    {
        //start with row value
        cout <<nrow<< "-";
        //go from column 0 -9
        ncolumn= 0;
        while (ncolumn<10)
        {
            //display product of column x row
            cout.width(2);
            cout << nrow* ncolumn << " ";
            //go to next column
            ncolumn++
        }
        //go to next row
        nrow++
        cout<<endl;
    }

    //terminate
    cout <<"Press Enter to continue.." <<endl;
    cin.ignore(10, '\n')
    cin.get
    return 0;
}
