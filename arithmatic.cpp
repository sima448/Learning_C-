#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    /*
    
    //print 1,3,5,7......n
    for(int i = 1; i<=2*n-1; i+=2){
        cout<< i <<endl;
    } 

    //// method second=>    //print 1,3,5,7......n
        int a = 1;
        for(int i=1; i<=n; i++){
            cout << a <<" ";
            a = a+2;
        }
            
           
///print 4,7,10,13.......n
for(int i = 4; i<=3*n+1; i+=3){
    cout<< i <<endl;
}

//second method

int b = 4;
for(int i=1; i<=n; i++){
    cout << b <<" ";
    b = b+3;
}

*/
///print 1,2,4,8,16....n
int x = 1;
for(int i=1;i<=n;i++){
    cout<< x<<" ";
    x = x*2;
}




}