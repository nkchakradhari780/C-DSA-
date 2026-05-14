#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>& vec, int target){
    vector<int> ans;
    int start = 0, end = vec.size() - 1;

    while(start <= end){
        if(vec[start] + vec[end] < target){
            start++;
        } else if(vec[start] + vec[end] > target){
            end--;
        } else {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }

    return ans;
}

int main(){
    vector<int> vec = {1,3,7,9,11,13,15};
    int target = 20;
    vector<int> ans = pairSum(vec, target);
    cout<<ans[0]<<","<<ans[1];
    return 0;
}