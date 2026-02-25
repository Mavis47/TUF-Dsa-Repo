#include <iostream>
#include <vector>
using namespace std;

int CountSubarray(vector<int> &nums,int k){
    int target=3;
    int c=0;
    
    for(int st=0;st<k;st++){
        int sum=0;
        for(int end=st;end<k;end++){
            sum += nums[end];
            if(sum == target){
                c++;
            }
        }
    }
    return c;
}

int main(){
    vector<int> vec = {1, 2, 3};
    int k=vec.size();

    cout<<CountSubarray(vec,k);
    return 0;
}