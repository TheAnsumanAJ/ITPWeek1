// 3)Given an integer N, print its multiplication table up to 10 using a for loop.
#include <iostream>
using namespace std;

int main()
{
  int n ;
  cout<<"Enter A number for printing of its multiplication table up to 10  : ";
  cin>>n;
  cout<<" Here is multiplication table up to 10 " <<endl;
  for (int i = 1; i < 11; i++)
  {
     
    cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
  

return 0;
}