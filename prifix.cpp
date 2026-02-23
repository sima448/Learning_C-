#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i = 0; i < n; i++){
    cin>>v[i];
  }
  vector<int>prefix(n);
  prefix[0] = v[0];
  for(int i = 1; i < n; i++){
    prefix[i] = prefix[i-1] ^ v[i -1];
    for(int i = 0; i<n; i++){
        
        cout<<prefix[i]<<" ";

    }
    cout<<endl;

  }
  for(int i = 0; i < n; i++){
    cout<<prefix[i]<<" ";
  }
  int q;
  cin>>q;
  while(q--){
    int l, r;
    cin>>l>>r;
    if(l == 0){
        cout<<prefix[r]<<endl;
    }else{
        cout<<prefix[r] - prefix[l-1]<<endl;
    }
  }
}