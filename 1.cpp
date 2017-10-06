#include<iostream>
using namespace std;
#include<conio.h>
int calPower(int, int);
int main()
{
    int base, power, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> power;

    result = calPower(base, power);
    cout << base << "^" << power << " = " << result;
    return 0;
}
int calPower(int base, int power)
{
    if (power != 0)
        return (base*calPower(base, power-1));
    else
        return 1;
}