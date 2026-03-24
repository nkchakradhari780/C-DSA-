#include<iostream>
using namespace std;

int smallestNum(int arr[], int size){       // log(n) time complexity 
    int smallest = INT_MAX;
    for(int i = 0; i < size; i++){
        smallest = min(arr[i], smallest);
    }
    return smallest;
}

int main(){
    int NumArr[5];
    cout<<"Enter the 5 Numbers: ";
    for(int i = 0; i< 5; i++){
        cin>>NumArr[i];
    }
    int smallest = smallestNum(NumArr, 5);
    cout<<"Smallest Number is: "<< smallest;
    return 0;
}