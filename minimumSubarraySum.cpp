#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

vector<int> minSubarraySum(vector<int>& nums, int val){
    int subarraySize = 1;
    int size = nums.size();
    while(subarraySize < size){
        for(int i = 0; i < i + subarraySize;i++){
            int sum = accumulate(nums.begin() + i, nums.begin() + i + subarraySize, 0);
            if (sum == val){
                vector<int> result(nums.begin()+ i, nums.begin()+ i + subarraySize);
                return result;
            }
            
        }
        subarraySize++;
    }
    return {0,0};
}

int main(){
    vector<int> nums = {1,2,3,4,2,6,7};
    int val = 5;
    vector<int> result = minSubarraySum(nums, val);
    for(int i : result){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}