#include <iostream>
#include <string>

using namespace std;


    struct Person{
        int Age;
        string Name;
        bool value;
    };
 int main()
 {
    
    // struct{
    //     int num = 23;
    //     string sy = "Heloo How are you";
    //     bool val = false;

    // } newstruct;

    // cout<<newstruct.num<<endl;
    // cout<<newstruct.sy<<endl;
    // cout<<newstruct.val;
//Structure for the person 1
    Person myperson1;
    
    myperson1.Age = 26;
    myperson1.Name = "Hamza";
    myperson1.value =  true;

//Structure for the person 2

    Person myperson2;
    myperson2.Age = 16;
    myperson2.Name = "Gul";
    myperson2.value = false;

    cout<<myperson1.Age <<" "<<myperson1.Name << " "<<myperson1.value<<endl;
    cout<<myperson2.Age <<" "<<myperson2.Name << " "<<myperson2.value;

    return 0;
 }

