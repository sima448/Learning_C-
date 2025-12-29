#include<iostream>
using namespace std;
int main() {
    // Take three numbers as input and print the least number among them
    /*
    int a, b, c;
    cout << "Enter first number: ";
    cin>> a;
    cout << "Enter second number: ";
    cin>> b;
    cout<< "Enter third number: ";
    cin>> c;
     if(a<b && a<c){
        cout << "The least number is: "<< a << endl;
         }
         else if(b<a && b<c){
        cout << "The least number is: "<< b << endl;
         }
         else if(c<b && c<a){
        cout << "The least number is: "<< c << endl;
         }
         else {
        cout << "Invalid Number "<< endl;
         }
    */



       // take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15
       int n;
       cout << "Enter a positive integer: ";
       cin >> n;
      if((n%5== 0 or n%3 == 0) and (n%15 != 0)){
         cout <<"The number is divisible by 3 or 5 but no divisible by 15"<< endl;
        } else {
            cout <<"The number is not divisible by 3 or 5 or 15"<< endl;
    }

}