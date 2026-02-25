#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> Majority_Element(vector<int> &nums){
    int n=nums.size();
    int cnt1=0,cnt2=0;
    int elem1 = 0,elem2=0;
    for(int i=0;i<nums.size();i++){
        if(cnt1 == 0 && elem2 != nums[i]){
           cnt1 = 1;
           elem1 = nums[i];
        }
        else if(cnt2 == 0 && elem1 != nums[i]){
            cnt2 = 1;
            elem2 = nums[i];
        }
        else if(elem1 == nums[i]) cnt1++;
        else if(elem2 == nums[i]) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }
    vector<int> ls;
    cnt1 = 0,cnt2 = 0;
    for(int i=0;i<nums.size();i++){
        if(elem1 == nums[i]) cnt1++;
        if(elem2 == nums[i]) cnt2++;
    }

    int mini = (int)(n/3) + 1;
    if(cnt1 >= mini) ls.push_back(cnt1);
    if(cnt2 >= mini) ls.push_back(cnt2);

    sort(ls.begin(),ls.end());
    return ls;
}

int main(){
    vector<int> nums = {1,1,1,3,3,2,2,2};
    vector<int> res = Majority_Element(nums);
    return 0;
}