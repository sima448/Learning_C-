#include<iostream>
using namespace std;
int main(){
     // if the ages of ram, shyam and ajay are input through the keybord, write a program to determine the youngest of the three.
     int a,b, c;
     cout << "Enter the age of Ram: ";
     cin>> a;
     cout << "Enter the age of Shyam: ";
     cin>> b;
     cout << "Enter the age of Ajay: ";
     cin>> c;
     if(a>b){
        if(a>c){
            cout<<"Enter a gestest age of the Ram "<< a << endl;
        } else {
            cout<<"Enter a greatest age of the Ajay "<< c << endl;

        }
     } else{
        if(b>c){
            cout<<"Enter a gestest age of the Shyam "<< b << endl;
        } else {
            cout<<"Enter a greatest age of the Ajay "<< c << endl;

        }

     }
}