#include<bits/stdc++.h>
using namespace std;

bool twoSum(int l ,int r, vector<int>& v, int& k) {
    if(l >= r) return false;

    if(v[l] +v[r] == k) return true;
    else if(v[l] + v[r] > k) {
        return twoSum(l, r - 1,v, k);
    }
    return twoSum(l + 1, r, v, k);

}
int main(){
    int n, k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto& i:v) cin>>i;

    vector<int> result
}