#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    cout<<"Hii";
    int i = 0, j = 0;
    if(nums1[i] > nums2[j]){
        swap(nums1[i], nums2[j]){
            i++;
        }
    }
}

int main(){
    int n,m;
    cin>>m>>n;
    vector<int> nums1(n + m,0);
    vector<int> nums2(n,0);
    for(int i = 0; i < m ; i++){
        cin>>nums1[i];
    }
    for(int i = 0; i < n; i++){
        cin>>nums2[i];
    }
    merge(nums1,m, nums2, n);
    for(int i = 0; i< n+m; i++){
        cout<<nums1[i]<<" ";
    }
    return 0;
}