// 1)Given a number, write a program to reverse its digits using a for loop.

#include <iostream>
using namespace std;

int main()
{
  int n,m,o=0;
cout<<"Enter A number for reversing : ";
cin>>n;
for (int i = n; i >0 ; i/=10)
{
  m=i%10;
  o=o*10+m;
}
cout<<"Reverse of "<<n<<" is "<<o;

return 0;
}