#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums,int target){
    int n = nums.size();
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set<long long> hashset;
            for(int k=j+1;k<n;k++){
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                long long fourth = target - sum;
                if(hashset.find(fourth) != hashset.end()){
                    vector<int> temp = {nums[i],nums[j],nums[k],(int)fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

int main(){
    vector<int> vec = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> result = fourSum(vec,target);

    for (auto &triplet : result) {
        for (int num : triplet) cout << num << " ";
        cout << endl;
    }
    
    return 0;
}