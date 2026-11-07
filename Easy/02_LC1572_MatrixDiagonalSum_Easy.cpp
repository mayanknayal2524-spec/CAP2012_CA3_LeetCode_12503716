#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {
        int sum=0;
        int s1=arr[0].size()-1;
        for(int i=0;i<arr.size();i++,s1--){
            if(i==s1){
                sum+=arr[i][i];
                continue;
            }
            sum+=arr[i][i]+arr[i][s1];
        }
        return sum;
    }
};