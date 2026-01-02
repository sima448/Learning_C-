#include<iostream>
using namespace std;
int main(){
    int x=3,y,z;
    y=x=10;//right to left
    z=x<10;//output-zero(0) false 10<10 nhi hota he
    cout<<x<<" "<<y<<" "<<z<<endl;
}