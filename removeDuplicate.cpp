#include<iostream>
#include<vector>
#include<set>
using namespace std;

int removeDuplicates(vector<int>& nums){
    set<int> s(nums.begin(), nums.end());
    nums.assign(s.begin(), s.end());
    return nums.size();
}

int main(){
    vector<int> nums = {1,1,2,2,2,24,4,46,7,8,65,4,6,7,8,2};
    int result = removeDuplicates(nums);
    cout<<"Result is: "<<result<<endl;
    for(int i : nums){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}