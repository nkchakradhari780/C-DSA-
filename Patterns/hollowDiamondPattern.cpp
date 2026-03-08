#include<iostream>
using namespace std;

int main(){
    int n;
    int j;
    cout<<"enter number n: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int k=j; k<n; k++){
            k == j? cout<<"* ": cout<<"  ";
        }
        for(int l=1; l<=i; l++){
            l == i ? cout<<"* ": cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=1; i<n; i++){
        for(j=1; j<=i; j++){
            cout<<"  ";
        }
        for(int k=j; k<=n; k++){
            k == j ? cout<<"* ": cout<<"  ";
        }
        for(int l=n-i-1; l>=1; l--){
            l == 1? cout<<"* ": cout<<"  ";
        }
        cout<<endl;
    }
}