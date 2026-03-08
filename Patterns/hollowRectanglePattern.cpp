#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            i == 0 || i == n-1 || j==0 || j==n-1 ? cout<<"* ": cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}