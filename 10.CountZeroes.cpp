#include<bits/stdc++.h>
using namespace std;
int CountZeroes(int n){
    if(n<=9)return 0;
    int ans = CountZeroes(n/10);
    if(n%10==0)return ans+1;
    return ans;
    
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int ans = CountZeroes(n);
    cout<<ans;
    return 0;
}