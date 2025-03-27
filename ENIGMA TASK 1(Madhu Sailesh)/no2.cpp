// 2)Write a program that calculates the factorial of a number using a for loop.

#include <iostream>
using namespace std;

int main()
{
  int n,o=1;
  cout<<"Enter A number for Calculating factorial : ";
  cin>>n;
  for (int i = n; i >0; i-=1)
  {
    o=i*o;
  }
  cout<<"Factroial of "<<n<<" is "<<o;;

return 0;
}