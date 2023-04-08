#include<iostream>
#include<string>
using namespace std;

int main(){

    int x,y;
    int sum;
    int mul;

    cout<<"Enter First number : ";
    cin>>x;
    cout<<"Enter Second number : ";
    cin>>y;
    sum = x+y;
    mul = x*y;
    cout << "Addition = " <<sum << endl;
    cout << "Multiplication = "<< mul<< endl;
    cout << (x==y);


    return 0;
}