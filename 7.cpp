#include <iostream>

using namespace std;

#include <math.h>

int rev(int, int);

int main() {

    int num, result;

    int length = 0, temp;

    cout<<"Enter an integer number: ";

    cin>>num;

    temp = num;

    while (temp != 0)
    {

        length++;

        temp = temp / 10;

    }

    result = rev(num, length);

    if(num==result)

        cout<<"The number is pallindrome"<<endl;

    else

        cout<<"The number is not pallindrome"<<endl;

    return 0;

}

int rev(int num, int len) {

    if (len == 1)

        return num;

    else

        return (((num % 10) * pow(10, len - 1)) + rev(num / 10, --len));

}