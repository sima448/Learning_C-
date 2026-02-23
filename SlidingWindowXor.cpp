#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n), output;
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    long long xor_sum = 0;
    for(int i = 0; i < k; i++) xor_sum ^= arr[i];
    output.push_back(xor_sum);

    for(int i = k; i < n; i++) {
        xor_sum ^= arr[i];
        xor_sum ^= arr[i - k]; 
        output.push_back(xor_sum);
    }

    for(auto x : output)
        cout << x << " ";

    return 0;
}