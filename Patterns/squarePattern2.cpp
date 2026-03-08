#include<iostream>
using namespace std;

int main() {
    int n, count=1;
    cout<<"Enter The Number n: ";
    
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            count < 10 ? cout<<" "<<count++<<" " : cout<<count++<<" ";        
        }
        cout<<endl;
    }
    return 0;
}