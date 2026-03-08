#include<iostream>
using namespace std;

int main(){
    int n,j,l;
    cout<<"Enter number n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        for(int k=j; k<=n; k++){
            cout<<"  ";
        }
        for(l=1; l<=n-i; l++){
            cout<<"  ";
        }
        for(int m=l; m<=n; m++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"* ";
        }
        for(int k=j; k<=n; k++){
            cout<<"  ";
        }
        for(l=0; l<i; l++){
            cout<<"  ";
        }
        for(int m=l; m<n; m++){
            cout<<"* ";
        }
        cout<<endl;
    }
}