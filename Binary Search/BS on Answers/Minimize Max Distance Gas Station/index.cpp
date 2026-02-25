#include <iostream>
#include <vector>
using namespace std;

long double minimizeMaxDistance(vector<int> &arr,int k){
    int n = arr.size();
    vector<int> howMany(n-1,0);
    for(int gasStations=1;gasStations<=k;gasStations++){
        long double maxSection = -1;
        int maxInd = -1;
        for(int i=0;i<n;i++){
            cout<<"iteration :- "<<i<<"\n";
            long double diff = (arr[i+1] - arr[i]);
            cout<<"DIff :- "<<diff<<"\n";
            long double sectionLength = diff / (long double)(howMany[i] + 1);
            cout<<"Section Length :- "<<sectionLength<<"\n";
            if(sectionLength > maxSection){
                cout<<(sectionLength > maxSection)<<"\n";
                maxSection = sectionLength;
                cout<<"maxSection :- "<<maxSection<<"\n";
                maxInd = i;
                cout<<"MaxInd :- "<<maxInd<<"\n";
            }
        }
        cout<<endl;
        howMany[maxInd]++;
    }
    long double maxAns = -1;
    for(int i=0;i<n-1;i++){
        long double diff = (arr[i+1] - arr[i]);
        long double sectionLength = diff / (long double)(howMany[i] + 1);
        maxAns = max(maxAns,sectionLength);
    }
    return maxAns;
}

int main(){
    vector<int> ans = {1,13,17,23};
    int k = 5;
    int res = minimizeMaxDistance(ans,k);
    cout<<"Result :- "<<res; 
}