#include <iostream>
using namespace std;
#include<conio.h>
void printNaturalNumbers(int lower, int upper);
int main()
{
    int lower, upper;
    cout<<"Enter lower limit: ";
    cin>>lower;
    cout<<"Enter upper limit: ";
    cin>>upper;
    cout<<"All natural numbers from "<<lower<<" to "<<upper<<" are: ";
    printNaturalNumbers(lower, upper);
    return 0;
}
void printNaturalNumbers(int lower, int upper)
{
    if(lower > upper)
        return;
    cout<<lower<<", ";
    printNaturalNumbers(lower + 1, upper);
}