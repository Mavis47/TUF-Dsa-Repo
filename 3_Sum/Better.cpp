#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums){
    int n=nums.size();
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        set<int> hashset;
        for(int j=i+1;j<n;j++){
           int third = -(nums[i] + nums[j]);
           if(hashset.find(third) != hashset.end()){
              vector<int> temp = {nums[i],nums[j],third};
              sort(temp.begin(),temp.end());
              st.insert(temp);
           }
           hashset.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

int main(){
    vector<int> vec = {2,-2,0,3,-3,5};
    vector<vector<int>> result = threeSum(vec);

    for (auto &triplet : result) {
        for (int num : triplet) cout << num << " ";
        cout << endl;
    }
    
    return 0;
}