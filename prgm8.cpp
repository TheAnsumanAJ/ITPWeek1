// WAP TO PRINT THE GIVEN PATTERN
//    *
//   * *
//  * * *
// * * * *
//  * * *
//   * *
//    *

#include <iostream>
using namespace std;
int main(){
    for(int y=1;y<=4;y++)
    {
        for(int b=4;b>=y+1;b--)
        {
            cout<<" ";
        }
        for(int x=1;x<=y;x++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int y=1;y<=3;y++)
    {
        for(int b=1;b<=y;b++)
        {
            cout<<" ";
        }
        for(int x=3;x>=y;x--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}
