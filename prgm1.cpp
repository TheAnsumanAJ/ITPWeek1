//WAP TO INPUT A NUMBER AND REVERSE ITS DIGITS USINF FOR LOOP.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;int r=0;
    for(int a=n;a>0;a=a/10)
    {
        int d=a%10;
        r=r*10+d;
    }
    cout<<"Original number:"<<n<<endl;
    cout<<"Reverse number:"<<r;
}