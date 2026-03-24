#include<iostream>
using namespace std;

bool powerOfTwo(int n){
    if (n <= 0) return false;
    return (n & (n -1)) == 0;       // Using bitwise & log(1) time complexity 
}

bool rightShiftPowerOfTwo(int n){       // using right shift operator log(n) complexity
    if (n <= 0) return false;
    if (n == 1) return true;
    if (n %2 == 0) return false;

    return rightShiftPowerOfTwo(n >> 1);  
}

bool leftShiftPowerOfTwo(int n, int power = 1){        // using left shift operator log(n) complexity
    if (power == n) return true;
    if (power > n) return false; 

    return leftShiftPowerOfTwo(n, power << 1);

}


int main(){
    int n;
    cout<<"Enter Number n: ";
    cin>>n;
    if (powerOfTwo(n)){
        cout<<"Number is power of 2";
    } else {
        cout<<"Number is not the power of 2";
    }

    return 0;
}