#include<iostream>
#include<string>

using namespace std;
int main(){

    int age;
    cout<<"Enter Your age";
    cin>>age;

    if (age>=18)
    {
        cout<<"Eligible for Votting"<<endl; 
    }else{
        cout<<"You cannot vote"<<endl;
    }
    
    cout<<"Good Day to you";
    

    return 0;
}