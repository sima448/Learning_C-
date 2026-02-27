
#include<bits/stdc++.h>
using namespace std;

vector<int> mem(100, -1);

int fibo(int n){
    if(mem[n] != -1){
    return mem[n];

}
    
     if(n <= 1) return n;
     
     return mem[n] = fibo(n - 1) + fibo(n - 2);
 }
     int main(){
     int n;
     cin>>n;

     cout << fibo(n) <<endl;
     return 0;
}
