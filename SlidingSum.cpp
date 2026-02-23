#include<bits/stdc++.h>
using namespace std;
int main(){
    //hme array me 10 number ka input lena he aur uska 1 to 4 tk ka suma and again 2 to 5 tk ka sum and aise hi aage badhna he
   int n= 10;
   vector<int>v(n);
   for(int i = 0; i < n; i++){
       cin>>v[i];
   }
    int k = 4;
    for(int i = 0; i <= n-k; i++){
        int sum = 0;
        for(int j = i; j < i+k; j++){
            sum += v[j];
        }
        cout<<sum<<" ";

    }
    cout<<endl;

}