// 6)Given a student's marks, use an if-else ladder to print the corresponding grade:
// >= 90: A

// 80-89: B

// 70-79: C

// 60-69: D

// < 60: Fail
#include <iostream>
using namespace std;

int main()
{
  int n ;
  cout<<"Enter Mark For Finding Gread: ";
  cin>>n;
  if (n>=90)
  {
    cout<<"Gread A";
  }
  else if (90>n && n>=80)
  {
    cout<<"Gread B";
  }
  else if (80>n && n>=70)
  {
    cout<<"Gread C";
  }
  else if (70>n && n>=60)
  {
    cout<<"Gread D";
  }
else{
  cout<<"Fail";
}
return 0;
}