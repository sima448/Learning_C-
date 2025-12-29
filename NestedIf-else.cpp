#include<iostream>
using namespace std;
int main() {
    // Take three numbers as input and print the greatest number among them without using multiple conditional statements
    int a, b, c;
    cout << "Enter first number: ";
    cin>> a;
    cout << "Enter second number: ";
    cin>> b;
    cout<< "Enter third number: ";
    cin>> c;
     if(a>b){//a>b
        if(a>c){//a>b and a>c
            cout<< "The greastest number is: "<< a<< endl;
        } else{//c>a and a>b or c>a>b
            cout<< "The greastest number is: " << c << endl;
        }
     } else{//b>a
        if(b>c){//b>a and b>c
            cout << "The greastest number is: " << b << endl;
        } else {//c>b and b>a or c>b>a
            cout<< "The greastest number is: " << c << endl;
        }

    }
     
    
     

}