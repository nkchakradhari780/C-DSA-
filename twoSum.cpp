#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> nums, int target){
    int size = nums.size();
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if (nums[i] + nums[j] == target){
                return {i, j};
            }
        }
    }
}

int main(){
    vector<int> nums = {1,2,4,5,2,5};
    vector<int> ans;
    ans = twoSum(nums, 3);
    cout<<"twoSum: ";
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}