#include<iostream>
using namespace std;
int main(){
    int n, i;
    cout<<"Enter the number: ";
    cin>>n;
    /*
    int  f = 1; //store heighest factor
    for(int i = 1;i<n; i++){
        if(n%i==0) f = i;

    }
    cout<<f ;
*/


    ////
for(int i = n/2;i>=1; i--){
        if(n%i==0){
       cout<<i<<" ";
     break;
        }   

    }

}