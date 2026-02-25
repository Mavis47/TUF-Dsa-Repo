#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeros(vector<int> &nums){
    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != 0){
            nums[j] = nums[i];
            j++;
        }
    }
    while(j<nums.size()){
        nums[j] = 0;
        j++;
    }
    return nums;
}

int main(){
    vector<int> vec = {0,1,4,0,5,2};
    vector<int> res = moveZeros(vec);
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;
}