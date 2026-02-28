#include<bits/stdc++.h>
using namespace std;

int gdc(int a, int b) {
    a = b;
    b = a % b;
    return (a % b ? gcd(b,a % b) : b);

}
int main() {
int a,b;
cin >> a >> b;
cout << gdc(a, b) <<endl;
}