// 4)Write a program that takes a number as input and determines whether it is prime using a while loop.
#include <iostream>
using namespace std;

int main()
{
  int n,i=2 ;
  bool isPrime=true;
  cout<<"Enter A number for find it is whether it is prime or not : ";
  cin>>n;
  if (n<2)
  {
    isPrime=false;
  }else{

  
  
  while ( i*i<=n )
  {
     
     if (n%i==0)
     {
      isPrime=false;
     }
     i++;

  }
}
  if (isPrime==true)
  {
    cout<<"It is a prime number";
  }
  if (isPrime==false)
  {
    cout<<"It is not a prime number";
  }
  


return 0;
}