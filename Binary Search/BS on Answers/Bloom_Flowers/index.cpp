#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int> &nums){
    int max = nums[0];
    int ans = -1;
    for(int i=0;i<nums.size();i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }
    return max;
}

int findMin(vector<int> &nums){
    int min = nums[0];
    int ans = -1;
    for(int i=0;i<nums.size();i++){
        if(nums[i] < min){
            min = nums[i];
        }
    }
    return min;
}

bool possible(vector<int> &nums,int days,int m,int k){
    int cnt = 0,num_of_bookeh=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] <= days){
            cnt++;
        }else{
            num_of_bookeh += (cnt/k);
            cnt = 0;
        }
    }
    num_of_bookeh += (cnt/k);
    if(num_of_bookeh >= m){
        return true;
    }else{
        return false;
    }
}

int BinarySearch(vector<int> &nums,int m,int k){
     if ((long long)m * k > nums.size()) return -1;
    int low = findMin(nums),high = findMax(nums);
    int ans = high;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(possible(nums,mid,m,k) == true){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1, 10, 3, 10, 2};
    int m = 3,k=2;
    int res = BinarySearch(nums,m,k);
    cout<<"Result :- "<<res;
    return 0;
}
