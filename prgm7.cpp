// WAP TO PRINT THE GIVEN PATTERN.
// * * * *
// * * *
// * *
// *


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows:";
    cin>>n;
    for(int y=n;y>=1;y--)
    {
        for(int x=1;x<=y;x++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}