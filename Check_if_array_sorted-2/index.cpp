#include <iostream>
#include <vector>
using namespace std;

bool CheckIfSorted(vector<int> &nums){
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i] > nums[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> nums = {1,4,5,9,10,11};
    bool res = CheckIfSorted(nums);
    if(!res){
        cout<<"Array not sorted";
    }else{
        cout<<"Array is sorted";
    }
    return 0;
}