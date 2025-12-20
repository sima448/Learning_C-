#include<iostream>
using namespace std;
int main (){
    /*
    int x = 5;
    cout << x << endl;// output 5
    x = 10; // updating the value of x means changing the value of x from 5 to 10(overwriting)
    cout << x << endl; // output 10
    */

    int x = 20;
    x = x + 10; // updating the value of x from 20 to 30
    cout << x << endl;// output 30
   //or
   
    x = x - 5; //or x -= 5; // updating the value of x from 30 to 25
    cout << x << endl; // output 25

    x = x * 5; //or x *= 5; // updating the value of x from 30 to 25
    cout << x << endl; // output 125

}