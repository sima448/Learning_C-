#include<bits/stdc++.h>
using namespace std;
int main() {
    //string
    string s = "abcdrhv";
    int len = s.size();
    s[len -1] = 'z';
    cout<< s[len - 4] <<endl;
    



    //array 
    int arr[5][3];
    arr[3][2] = 60;
    cout << arr[1][3] <<endl;
    
    return 0;
}