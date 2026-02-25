#include <iostream>
#include <vector>
using namespace std;

void threeSum(vector<int> &nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i] + nums[j] + nums[k] == 0){
                    cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                }
            }
        }
    }
}

int main(){
    vector<int> vec = {2,-2,0,3,-3,5};
    threeSum(vec);
    
    return 0;
}