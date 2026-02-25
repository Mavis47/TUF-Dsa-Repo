#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool possible(vector<int> &nums,int divisor,int limit){
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum += (nums[i] + divisor - 1) / divisor;
    }
    return sum <= limit;
}

int SmallestDivisor(vector<int> &nums,int limit){
    int low = 1,high = limit,ans;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(possible(nums,mid,limit) == true){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int limit = 8;
    int res = SmallestDivisor(nums,limit);
    cout<<"Result :- "<<res;
    return 0;
}
