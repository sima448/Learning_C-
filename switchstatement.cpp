#include<iostream>
using namespace std;
int main(){
    /*
    //calculate the calculator in switch statement
    int n1, n2;
    cout << "Enter a first number: ";
    cin>>n1;
    char op;//op-operator
    cout<< "operator: ";
    cin>>op;
     cout << "Enter a second number: ";
    cin>>n2;
    if(op=='+') cout<<n1+n2<<endl;
    if(op=='-') cout<<n1-n2<<endl;
    if(op=='*') cout<<n1*n2<<endl;
    if(op=='/') cout<<n1/n2<<endl;
    */
    //or
     int n1, n2;
    cout << "Enter a first number: ";
    cin>>n1;
    char op;//op-operator
    cout<< "operator: ";
    cin>>op;
     cout << "Enter a second number: ";
    cin>>n2;
    switch(op){
        case '+' :
            cout<<n1+n2<<endl;
            break;
         case '-' :
            cout<<n1-n2<<endl;
            break;
        case '*' :
            cout<<n1*n2<<endl;
            break;
        case '/' :
            cout<<n1/n2<<endl;
            break;
        default:
        cout<<"Invalid Operator";

    }



}