#include<iostream>
using namespace std;

string determineColor(string str){
    char str1 = str[0];
    char str2 = str[1];
    if ((str1 % 2 == 0 && str2 % 2 == 0) || (str1 % 2 == 1 && str2 % 2 ==1)){
        return "Black";
    } else {
        return "White";
    }
}
int main(){
    string str;
    cin>>str;
    string result = determineColor(str);
    cout<<result<<endl;
}