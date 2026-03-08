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
        for(int k=j; k<=n; k++){
            cout<<"* ";
        }
        for(int l=1; l<i; l++){
            cout<<"* ";
        }
        cout<<endl;
    }
}