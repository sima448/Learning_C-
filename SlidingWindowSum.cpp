#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    vector<int> arr(n);
    for(int i=0;i< n;i++){
        cin>>arr[i];
    }
    long long sum=0;
    for(int j=0;j<k;j++){
        sum+=arr[j];
    }
    cout<<sum<<' ';
    for(int i=1;i<=n-k;i++){
        sum-=arr[i-1];
        sum+=arr[i+k-1];
        cout<<sum<<' ';
    }
  
}