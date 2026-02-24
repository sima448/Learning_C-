#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k,x,a,b,c;
    cin>> n >> k;
    cin>> x >> a >> b >> c;
    vector<long long>arr(n);
    long long output = 0;
    arr[0] = x;

    for(int i = 1; i < n; i++) {
        arr[i] = (arr[i-1] * a + b) % c;
    }
    
    long long sum = 0;
    for(int j = 0; j < k; j++) {
        sum += arr[j];
    }
    output ^= sum;

    for(int i = k; i < n; i++){
        sum -= arr[i - k];
        sum += arr[i];
        output ^= sum;
    }

    cout << output << " ";
        return 0;
}