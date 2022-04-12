#include<bits/stdc++.h>
using namespace std;

int SumOfDigits(int n){
    if(n<=0)return 0;
    return SumOfDigits(n/10)+n%10;
}

int main(){
    int n;
    cin>>n;
    int ans = SumOfDigits(n);
    cout<<ans;
}