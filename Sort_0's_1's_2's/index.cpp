#include <iostream>
#include <vector>
using namespace std;

void CountNumber(vector<int> &arr){
    map<int,int> mp;
    int count_zeros = 0;
    int count_ones = 0;
    int count_two = 0;
    for(int i=0;i<nums.size();i++){
        mp.insert[arr[i]];
    }
    for(int i=0;i<mp.size();i++){
        if(mp.first('0') != mp.end()){
            count_zeros++;
        }
        if(mp.first('1') != mp.end()){
            count_ones++;
        }
        if(mp.first('2') != mp.end()){
            count_two++;
        }
    }
    cout<<"Zeros :- "<<count_zeros<<endl;
    cout<<"Ones :- "<<count_ones<<endl;
    cout<<"Two :- "<<count_two<<endl;
}

int main(){
    vector<int> nums = {1,0,2,1,0};
    CountNumber(nums);
    return 0;
}