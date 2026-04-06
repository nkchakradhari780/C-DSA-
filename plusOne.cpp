#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits){
    int n = digits.size();

    for(int index = n-1; index >= 0; index--)
    {
        if(digits[index] < 9){
            digits[index] += 1;
            return digits;
        } 
        digits[index] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main(){
    vector<int> vect = {1,5,9,9};
    vector<int> result = plusOne(vect);
    for(int i: result){
        cout<<i<<" ";
    }
    return 0;
}

