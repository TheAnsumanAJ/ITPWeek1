//WAP TO INPUT A NUMBER AND PRINT ITS MULTIPLICATION TABLE UPTO 10 USING FOR LOOP.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}