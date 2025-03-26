// 5)Write a program that counts the number of digits in an integer using a while loop.

#include <iostream>
using namespace std;

int main()
{
  int n,a ;
  cout<<"Enter A number for counts the number of digits : ";
  cin>>n;
  a=n;
int count=0;
while (n>0)
{
   n/=10;
   count++;
}
cout<<"No of digits of "<<a<<" is "<<count;

return 0;
}