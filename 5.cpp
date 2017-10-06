#include<iostream>

using namespace std;

int main(){


    int i,limit;

    long odd_sum =0,even_sum = 0;

 
   cout << "Enter the limit: ";

    cin >> limit;


    for(i = 0;i <= limit; i++)

        if(i % 2 != 0)

            odd_sum = odd_sum + i;

        else

            even_sum = even_sum + i;

    cout << "Sum of even numbers in given range is: " << even_sum << endl;

    cout << "Sum of odd numbers in given range is: " << odd_sum;


    return 0;


}