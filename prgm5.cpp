//WAP TO COUNT THE NUMBER OF DIGITS IN AN INTEGER USING A WHILE LOOP.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int a=n;int c=0;
    while(a>0)
    {
        int d=a%10;
        c++;
        a=a/10;
    }
    cout<<"No. of digits in "<<n<<":"<<c;
}