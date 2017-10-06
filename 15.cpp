#include <iostream>
using namespace std;
int findMinRec(int A[], int n);
int findMaxRec(int A[], int n);
int main()
{
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int A[size];
    cout<<"Enter the array elements"<<endl;
    for(int i = 0; i < size; i++)
        cin>>A[i];
    cout<<"Greatest number in the array is "<<findMaxRec(A, size)<<endl;
    cout<<"Smallest number in the array is "<<findMinRec(A, size)<<endl;
    return 0;
}
int findMinRec(int A[], int n)
{
    if (n == 1)
        return A[0];
    return min(A[n-1], findMinRec(A, n-1));
}
int findMaxRec(int A[], int n)
{
    if (n == 1)
        return A[0];
    return max(A[n-1], findMaxRec(A, n-1));
}