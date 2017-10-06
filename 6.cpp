#include<iostream>
using namespace std;
int r,s=0;
int reverse(int n)
{ 
	if (n>=1)
	{
	  r=n%10;
              s=s*10+r;
              reverse(n/10);
            }

else
{
return s;
}
}
int main()
{
int x;
cout<<"number"<<endl;
cin>> x;
cout<<"reverse of number"<<reverse(x);
return 0;
}
