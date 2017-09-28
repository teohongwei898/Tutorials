#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
class Person
{
public:
    char szFirstName[128];
    char szLastName[128];
    int NRIC;
};
Person getPerson()
{
    Person person;
    cout<< "\nEnter another person\n"
        <<"First name: ";
    cin>> person.szFirstName;
    cout <<"Last name:";
    cin>>person.szLastName;
    cout<< "NRIC";
    cin>>person.NRIC;
    return person;
}
int getPeople (Person people[], int nMaxSize)
    int index;
    for (index=0;index < nMaxSize; index++)
    {
        char cAnswer;
        cout <<"Enter another name?";
        cin>>cAnswer;
        if (cAnswer!='Y' && cAnswer!= 'y')
        {
            break;
        }
        people[index]= getPerson();
    }
    return index;
}
void displayPerson (Person person)
{
    cout<<"First name: "<< person.szFirstname << endl;
    cout<<"Last name: "<< person.szLastname << endl;
    cout<<"NRIC: "
        <<person.NRIC << endl;

}
void displayPeople(person people[], int ncount)
{
    for(int index= 0; index <nCount; index++)
    {
        displayPerson(people[index]);
    }
    void sortPeople(Person people[], int nCount)
    {
        int nSwaps=1;
        while (nSwaps !=0)
        {
            nSwaps=0;
            for(int n=0; n < (nCount - 1); n++)
            {
                if (people[n].NRIC)>
                    people[n+1].NRIC)
                {
                    Person temp = people[n+1];
                    people [n+1]=people[n];
                    people[n] = temp;
                    nSwaps++;
                }
            }
        }
    }
int main (int nNumberofArgs, char* pszArgs[])
{
    Person people [128];
    cout <<"Read name/NRIC\n";
    int nCount = getpeople(people, 128);
    sortPeople(people, nCount);
    cout << "\nHere is the list sorted by"
        <<"NRIC" <<endl;
    displayPeople(people, nCount);

}
    return 0;
}
