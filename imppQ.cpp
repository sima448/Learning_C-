#include<iostream>
using namespace std;
int main(){
    // a = 7/22*(3.14 + 2)* 3/5;
    int x = 7/22;
    float y = (3.14 +2);
    int z = 3/5;
    float a = x *y *z;
    cout << a << endl;//result = 0
    cout <<  typeid(a).name() << endl;//float
}