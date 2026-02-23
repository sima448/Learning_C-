#include<bits/stdc++.h>
using namespace std;
int  main(){
    multiset<int> st;
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    for(int i =0; i<k; i++){
        st.insert(arr[i]);
    }
    cout<<*st.begin()<<' ';
    for(int i=k; i<n; i++) {
        st.erase(st.find(arr[i-k]));
        st.insert(arr[i]);
        cout<<*st.begin()<<' ';
    }
}