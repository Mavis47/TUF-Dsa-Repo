#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> Pascal_traingle(int numRows){
    for(int i=0;i<numRows;i++){
        for(int j=0;j<numRows-i-1;j++){
            cout<<"_"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int numRows = 5;
    vector<vector<int>> vec = Pascal_traingle(numRows);
    return 0;
}