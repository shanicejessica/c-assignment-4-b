#include<iostream>
using namespace std;
int findSum(int A[], int N);
int main()
{
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int A[size];
    cout<<"Enter the array elements"<<endl;
    for(int i = 0; i < size; i++)
        cin>>A[i];
    cout<<"Sum of elements is "<<findSum(A, size);
    return 0;
}
int findSum(int A[], int size)
{
    if (size <= 0)
        return 0;
    return (findSum(A, size-1) + A[size-1]);
}