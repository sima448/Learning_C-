#include<iostream>
using namespace std;

int main(){
    //continue ka use kr ke 1to 100 ke bich odd number print kre
    int n, i;
    cout<<"Enter the number: ";
    cin>>n;
        for (int i =1; i<=100; i++){
        if(i%2==0) continue;
        cout<<i<<" ";
        }
}
