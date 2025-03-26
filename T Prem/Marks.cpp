#include<iostream>
using namespace std;
int main(){
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;
    if(mark >= 90){
        cout << "A" << endl;}
    else if(mark >80 && mark <= 89){
        cout << "B" << endl;}
    else if(mark >70 && mark <= 79){
        cout << "C" << endl;}
    else if(mark >60 && mark <= 69){
        cout << "D" << endl;}
    else( mark < 60);{
        cout << "Fail" << endl;
    }
    return 0;
}