#include<iostream>
#include<vector>
using namespace std;

int kadansAlgoMaxSum(vector<int>& vec){
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i < vec.size(); i++){
        currentSum += vec[i];
        maxSum = max(maxSum, currentSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    }

    return maxSum;
}

int maxSum(vector<int>& vec){
    int len = vec.size();

    int maxSum = INT_MIN;

    for(int i = 0; i < len; i++){
        int currentSum = 0;
        for(int j = i; j < len; j++){
            currentSum+=vec[j];
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}

int main(){
    vector<int> vec = {3,-4,5,4,-1,7,-8};
    int maxSum1 = maxSum(vec);
    int maxSum2 = kadansAlgoMaxSum(vec);
    cout<<"Max Sum: "<<maxSum1<<endl;
    cout<<"Max Sum: "<<maxSum2<<endl;
    return 0;
}