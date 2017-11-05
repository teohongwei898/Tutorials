#include <iostream>

using namespace std;

//define
inline long DoubleNum (int inputNum)
{
    return inputNum * 2;
}
int main()
{
    cout << "Enter an integer" << endl;
    int inputNum = 0;
    cin>> inputNum;
    //call function
    cout<< "Double is " <<DoubleNum(inputNum) <<endl;
    return 0;
}
