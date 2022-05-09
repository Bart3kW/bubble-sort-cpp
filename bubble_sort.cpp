#include <iostream>
//bubble sort
//easy example
using namespace std;

constexpr int howMuch=5;
//-----------------
//TABLE DECLARATION
int table[howMuch];

//--------------------
//functions
void showTable();//function showing table
void askForNumbers();//asking for numbers to sort
void bubbleSortUsingTemporaryVariable(int []);//buble sort function
//------------------

int main()
{
    cout<<"***********"<<endl;
    cout<<"BUBBLE SORT"<<endl;

    askForNumbers();

    showTable();

    bubbleSortUsingTemporaryVariable(table);//sort

    cout<<endl<<endl<<"Table after bubble sort:"<<endl;

    showTable();
}
//-------------
//FUNCTION SHOWING HOW TABLE LOOK
void showTable()
{
    for(int i = 0; i < howMuch; i++ )
        cout<<i<<" ";

    cout<<endl;

    for(int i = 0; i < howMuch; i++ )
        cout<<table[i]<<" ";
}
//------------------
//ASKING FOR NUMBERS TO SORT
void askForNumbers()
{
    cout<<endl;
    for(int i = 0 ;i < howMuch; i++)
    {
        cout<<"Number "<<i+1<<" = ";
        cin>>table[i];
    }

}
//------------------------------------------------
//SORTING FUNCTION
void bubbleSortUsingTemporaryVariable(int table[])
{
    int temp;//temporary variable declaration

    for(int i = 0 ; i < howMuch ; i++)
    {
        for(int j = 0; j < howMuch -1 ;j++)
        {
            if(table[j] > table[j+1])
                {
                    temp = table[j];
                    table[j] = table[j+1];
                    table[j+1] = temp;
                }
        }
    }
}