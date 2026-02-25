#include <iostream>
#include <vector>
using namespace std;

long long int Count_Inversion(vector<int> nums){
    int count = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i] > nums[j] && i<j){
                count++;   
            }
        }
    }
    return count;
}

int main(){
    vector<int> nums = {2,3,7,1,3,5};
    cout<<Count_Inversion(nums);
    return 0;
}