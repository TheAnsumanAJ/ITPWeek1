#include<iostream>
using namespace std;
int main(){
    int num;
    int x=1;
    cout << "Enter a number: " <<endl;
    cin >> num;
    if (num<2){
        cout << num << " is not a prime number." <<endl;
        return 0;
    }
    int i=2;
    while(i <= num/2){
        if(num%i==0){
            x=0;
            break;
        }
        i++;
    }
    if(x==1){
        cout << num << " The entered number is prime number." <<endl;
    }
    else{
        cout << num << " The entered number is not a prime number." <<endl;
    }
    return 0;
}