#include <iostream>
#include <vector>
using namespace std;

vector<int> DutchNational(vector<int> nums){
    int low = 0,high=nums.size()-1;
    int mid = 0;
    while(mid<=high){
        if(nums[mid] == 0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    return nums;
}

int main(){
    vector<int> nums = {1,0,2,1,0};
    vector<int> res = DutchNational(nums);
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;
}