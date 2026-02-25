#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int> &nums,int k)
{
    int sum=0;
    int Total_Sum = k*(k+1)/2;
    for(int i=0;i<nums.size();i++){
        sum = sum + nums[i];
    }
    int res = Total_Sum - sum;
    return res;
}
int main(){
    vector<int> nums = {0, 1, 2, 4, 5, 6};
    int s = nums.size();
    cout<<"Missing Number is :- "<<findMissingNumber(nums,s);
    return 0;
}