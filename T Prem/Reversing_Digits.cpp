#include<iostream>
using namespace std;
int main(){
    int num,reverse=0;
    cout<<"Enter a number: " << endl;
    cin>>num;
    int rem;
    for (int i = num; i>0; i/=10){
        rem = i%10;
        reverse = reverse*10 + rem;
    }
    cout<<"The reverse of the number is: " << reverse << endl;
    return 0;
}