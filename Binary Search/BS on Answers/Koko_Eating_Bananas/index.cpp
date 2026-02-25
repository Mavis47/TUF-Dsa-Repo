#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int findMax(vector<int> &piles){
    int maxPile = INT_MIN;
    for(int i=0;i<piles.size();i++){
        maxPile = max(maxPile,piles[i]);
    }
    return maxPile;
}

int CalculateTotalHours(vector<int> &piles,int boundary){
    int TotalM = 0;
    int n = piles.size();
    for(int i=0;i<n;i++){
        TotalM += ceil((double)piles[i]/(double) boundary);
    }
    return TotalM;
}

int KokoEatingBananas(vector<int> &piles,int h){
    int low = 1,high = findMax(piles);
    while(low <= high){
        int mid = low + (high - low)/2;
        int TotalHours = CalculateTotalHours(piles,mid);
        if(TotalHours <= h){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    vector<int> piles = {7, 15, 6, 3};
    cout<<"Minimum Bananas to Eat/hrs is :- "<<KokoEatingBananas(piles, 8);
    return 0;
}