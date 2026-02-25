#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> ThreeSum(vector<int> nums){
    sort(nums.begin(),nums.end());
    int n = nums.size();
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;

        if(i>0 && nums[i] == nums[i-1]) continue;

        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0){
                j++;
            }else if(sum > 0){
                k--;
            }else{
                vector<int> temp = {nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j>k && nums[j] == nums[j-1]) j++;
                while(j>k && nums[k] == nums[k+1]) k--;  
            }
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {2,-2,0,3,-3,5};
    vector<vector<int>> result = ThreeSum(vec);

    for (auto &triplet : result) {
        for (int num : triplet) cout << num << " ";
        cout << endl;
    }
    
    return 0;
}