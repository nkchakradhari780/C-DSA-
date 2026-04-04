#include<iostream> 
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int singleNum = 0;
    for(int i : nums){
        singleNum = singleNum ^ i;     // 0 ^ 0 = 0 / 1 ^ 1 = 0 / 1 ^ 0 = 1;
    }
    return singleNum;
}

int main(){
    vector<int> nums = {4,1,2,1,2};
    int singleNum = singleNumber(nums);
    cout<<"SingleNumber is: "<<singleNum;
    return 0;
}

