#include<iostream>
using namespace std;
int main(){
    float cp,sp;
    cout<<"Cost Price is: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit"<<endl;
    }
    else if(cp>sp) {
        cout<< "Loss"<<endl;
    }
    else if(cp == sp){
        cout<<" No profit no loss"<< endl;
    }
    else {
        cout << "Invalid Input"<< endl;
    }
}