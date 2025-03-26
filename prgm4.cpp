//WAP THAT TAKES A NUMBER AS INPUT AND DETERMINE WHETHER IT IS PRIME USING A WHILE LOOP.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int flag=0;
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        cout<<"Prime number";
    }
    else{
        cout<<"not a prime number";
    }
}