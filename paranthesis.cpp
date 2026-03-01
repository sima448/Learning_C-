#include<bits/stdc++.h>
using namespace std;

vector<string> generateSeq(int i, vector<char>& seq) {
    if(i==seq.size()) {
        return {""};
    }
    vector<string> nextSeq = generateSeq(i + 1, seq);
    vector<string> allSeq = nextSeq;
    //add enclosed
     for (string vl: nextSeq) {
        if(seq[i] == '(') {
            allSeq.push_back('(' + vl + ')');

        } else if (seq[i] == '[') {
            allSeq.push_back('[' + vl + ']');
        } else {
            allSeq.push_back('{' + vl + '}');
        }
     }
     //addExternalClosed
     for(string vl: nextSeq) {
        if(vl == "") continue;
        if(seq[i] == '(') {
            allSeq.push_back("()" + vl);
        } else if (seq[i] == '[') {
            allSeq.push_back("[]" + vl);
        } else {
            allSeq.push_back("{}" + vl);
        }
     }

     return allSeq;
    
    }

     int main(){
        int n;
        cin >> n;

        vector<char> seq(n);
        for(auto& i: seq) cin >> i;

        vector<string> result = generateSeq(0, seq);

        cout << result.size() <<endl;
        for(auto& sequence: result) {
           cout << sequence << endl;
        }
     }

/*input
3
[ { (

//output
14

()
{}
{()}
{}()
[]
[()]
[{}]
[{()}]
[{}()]
[]()
[]{}
[]{()}
[]{}()
*/




















