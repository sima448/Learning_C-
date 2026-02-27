#include<bits/stdc++.h>
using namespace std;

void generateSubsets(int i, vector<int>& nums,
    vector<vector<int>>& result, vector<int>& current) {
     if(i == nums.size()){
        result.push_back(current);
        return;

     }
         current.push_back(nums[i]);
        generateSubsets(i + 1,nums, result, current);
        current.pop_back();
        generateSubsets(i + 1,nums, result, current);

    }

    int main(){
        int n;
        cin>>n;

        vector<int> v(n);
        for(auto& i:v) cin>>i;

        vector<vector<int>> result;
        vector<int> current;
        generateSubsets(0, v, result, current);
        
        for(auto &subset : result) {
            for(auto x : subset) cout << x << " " << endl;
            cout <<endl;

        }
        return 0;
}
    
