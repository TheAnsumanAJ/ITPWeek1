//WAP THAT CALCULATES THE FACTORIAL OF A NUMBER USING A FOR LOOP.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<n<<"!"<<" = "<<f;
}