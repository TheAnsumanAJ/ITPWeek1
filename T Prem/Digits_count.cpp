#include<iostream>
using namespace std;
int main(){
    int num;
    int count=0;
    cout << "Enter a number: " <<endl;
    cin >> num;
    while(num!=0){
        num=num/10;
        count++;
    }
    cout << "The number of digits in the entered number is: " << count <<endl;
    return 0;
}