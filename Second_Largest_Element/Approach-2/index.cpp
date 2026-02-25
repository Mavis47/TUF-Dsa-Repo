#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int Second_largest_Ele(vector<int> &nums){
    int first = INT_MIN;
    int Second = INT_MIN;
    
    for(int x:nums){
        if(x>first){
            Second = first;
            first = x;
        }else if( x<first && x>Second){
            Second = x;
        }
    }
    return Second;
}

int main(){
    vector<int> nums = {7,7,2,2,2,10,10};
    int res = Second_largest_Ele(nums);
    cout<<res;
    return 0;
}
