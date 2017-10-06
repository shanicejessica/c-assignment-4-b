#include<iostream>
using namespace std;
void printArrayForward(char arr[],int size);
int main()
{
   int size;
   cout<<"Please Enter The Size Of The Array : ";
   cin>>size;
   char arr[size];
   cout<<"Please Enter Array Elements :";
   for(int i=0;i<size;i++)
   {
   	cin>>arr[i];
   }   
   cout<<"The Element Of The Array in Forward :";
   printArrayForward(arr,size);
   cout<<endl;
}
void printArrayForward(char arr[],int size)
{
   if(size==1)
      cout<<arr[0]<<" ";
   else
   {
      printArrayForward(arr,size-1);
      cout<<arr[size-1]<<" ";
   }
}