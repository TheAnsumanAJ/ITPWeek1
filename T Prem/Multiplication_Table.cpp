#include<iostream>
using namespace std;
int main(){
    int num;
    cout<< "Enter a Number: ";
    cin>>num;
    int x;
    for(int i =1;i<=10;i++){
        x=num*i;
        cout<<num<< " * " << i << " = "<< x << endl;
    }
    return 0;
}