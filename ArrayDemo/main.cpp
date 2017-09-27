#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
//display contents of array of value of length of ncount
void displayarray (int nvalues[100], int ncount)
{
    for (int i = 0; i < ncount; i++)
    {
        cout.width(3);
        cout << i << " - " <<nvalues[i] <<endl;
    }
}
//averagerray averages the content of an array
int averageArray (int nvalues[100], int ncount)
{
    int nsum = 0;
    for (int i=0;i < ncount; i++)
    {
        nsum += nvalues[i];
    }
    return nsum / ncount;
    }
}
int main(int nNumberofArgs, char * pszArgs[])
{
    int nscores[100];
    int ncount;
    cout << "This program averages a set of values that you key in.\n"
        <<"Enter values to average\n"
        <<"(enter a negative value to terminate input"
        <<endl;
    for(ncount=0;ncount < 100; ncount++)
    {
        cout<<"Next:";
        cin>> nscores[ncount];
        if (nscores[ncount]<0)
        {
            break;
        }
    }
    //output
    cout <<"Input terminated." << endl;
    cout<< "Input data: "<<endl;
    displayarray(nscores, ncount);
    cout << "the average is "
        <<averageArray(nscores, ncount)
        <<endl;
//terminate
    cout<<"Press Enter to continue.."<< endl;
    cin.ignore(10, '\n');
    cin.get
    return 0;
    return 0;
}
