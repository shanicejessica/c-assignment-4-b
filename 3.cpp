#include<iostream>
using namespace std;
#include<conio.h>
void printEvenOdd(int cur, int limit);
int main()
{
    int lower, upper;
    cout<<"Enter lower limit: ";
    cin>>lower;
    cout<<"Enter upper limit: ";
    cin>>upper;
    if(lower%2==0) {
        cout<<"Even Numbers from "<<lower<<" to "<<upper<<" are : ";
        printEvenOdd(lower, upper); 
    	cout<<"Odd Numbers from "<<lower<<" to "<<upper<<" are : ";
        printEvenOdd(lower+1, upper); 
    }
    else {
        cout<<"Even Numbers from "<<lower<<" to "<<upper<<" are : ";
        printEvenOdd(lower+1, upper); 
    	cout<<"Odd Numbers from "<<lower<<" to "<<upper<<" are : ";
        printEvenOdd(lower, upper); 
    }
    
    return 0;
}
void printEvenOdd(int cur, int limit)
{
    if(cur > limit)
        return;
    cout<<cur<<", ";
    printEvenOdd(cur + 2, limit);
}