#include <iostream>
//bubble sort
//easy example

using namespace std;

constexpr int howMuch=5;

int table[howMuch];

void showTable();
void askForNumbers();

int main()
{
    cout<<"***********"<<endl;
    cout<<"BUBBLE SORT"<<endl;

    askForNumbers();

    showTable();

}

void showTable()
{
    for(int i = 0; i < howMuch; i++ )
        cout<<i<<" ";

    cout<<endl;

    for(int i = 0; i < howMuch; i++ )
        cout<<table[i]<<" ";
}

void askForNumbers()
{
    for(int i = 0 ;i < howMuch; i++)
    {
        cout<<"Number "<<i+1<<" = ";
        cin>>table[i];
    }

}