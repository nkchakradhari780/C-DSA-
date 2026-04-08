#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val){
    int i = 0;
    while(i < nums.size()){
        if(nums[i] == val){
            nums.erase(nums.begin() + i);
        }
        else {
            i++;
        }
    }
    return nums.size();
}
int main(){
    vector<int> nums = {1,2,3,5,4,34,3,6,4,43,3,23,5,6,4,3,3,3,3,2};
    cout<<"Initial size: "<<nums.size()<<endl;
    int val = 3;
    int result = removeElement(nums, val);
    cout<<"Result is: "<< result<<endl;
    for(int i: nums){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}