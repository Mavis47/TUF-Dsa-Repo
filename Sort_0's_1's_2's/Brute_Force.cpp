#include <iostream>
#include <vector>
using namespace std;

vector<int> CountNumbers(vector<int> nums){
    int c1=0,c2=0,c3=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 0){
            c1++;
        }else if(nums[i] == 1){
            c2++;
        }else if(nums[i] == 2){
            c3++;
        }
    }

    int idx=0;
    for(int i=0;i<c1;i++){
        nums[idx] = 0;
        idx++;
    }
    for(int i=0;i<c2;i++){
        nums[idx] = 1;
        idx++;
    }
    for(int i=0;i<c3;i++){
        nums[idx] = 2;
        idx++;
    }
    return nums;
}

int main(){
    vector<int> nums = {1,0,2,1,0};
    vector<int> res = CountNumbers(nums);
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;
}