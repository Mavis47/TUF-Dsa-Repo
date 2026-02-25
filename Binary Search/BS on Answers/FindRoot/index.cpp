#include <iostream>
#include <vector>
using namespace std;

int FindRoot(int root){
    int low = 1,high=root,ans = 0;

    while(low <= high){
        int mid = low + (high - low) / 2;
        long long val = mid * mid;
        if(val <= root){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    int root = 28;
    cout << "The root is: " << FindRoot(root) << endl;
    return 0;
}