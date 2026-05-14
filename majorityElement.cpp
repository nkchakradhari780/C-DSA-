#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>& vec){
    sort(vec.begin(), vec.end());
    int frequency = 1, ans = vec[0];
    for(int i = 1; i < vec.size(); i++){
        if(vec[i] == vec[i - 1]){
            frequency++;
        } else {
            frequency = 1; 
            ans = vec[i];
        }
        if(frequency > vec.size()/2){
            return ans;
        }
    }

   return ans;
}

int mooresVotingAlgo(vector<int> vec){
    int freq = 1, ans = 0;
    for(int i=0; i < vec.size(); i++){
        if(freq <= 0){
            ans = vec[i];
        }
        if(ans == vec[i]){
            freq++;
        } else {
            freq--;
        }
    }   

    return ans;
}

int main(){
    vector<int> vec = {1,1,2,1,1,1,0,2,2,1,3};
    // int element = majorityElement(vec);
    int element1 = mooresVotingAlgo(vec);
    // cout<<"Majority Element: "<<element<<endl;
    cout<<"Majority Element1: "<<element1;
    return 0;
}