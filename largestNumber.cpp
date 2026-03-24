#include<iostream>
using namespace std;

int largestNum(int arr[],int size){
    int largest = INT_MIN;
    for(int i = 0; i < size; i++){
        largest = max(arr[i], largest);
    }
    return largest;
}

int main(){
    int NumArr[5];
    cout<<"Enter 5 Numbers: ";
    for(int i = 0; i < 5; i++){
        cin>>NumArr[i];
    }
    int largest = largestNum(NumArr, 5);
    cout<<"Largest Number is: "<< largest;
    return 0;
}