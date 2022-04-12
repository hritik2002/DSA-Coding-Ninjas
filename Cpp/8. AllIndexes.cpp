#include<bits/stdc++.h>
using namespace std;
void AllIndexes(vector<int>&arr,int n , int  &x , vector<int>&ans){
    if(n<=0)return;
    AllIndexes(arr,n-1,x,ans);
    if(arr[n-1]==x){
        ans.push_back(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter the total number n \n";
    cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i <n ; i++)cin>>arr[i];
    int x;
    cout<<"Enter the value to be searched \n";
    cin>>x;
    vector<int>ans ;
    AllIndexes(arr,n,x,ans);
    cout<<"This is the output array"<<endl;
    for(int i=0 ; i<ans.size() ;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}