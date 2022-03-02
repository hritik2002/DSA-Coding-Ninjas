#include<bits/stdc++.h>
using namespace std;

int FirstIndex(int *arr , int x,int n){
    if(n<=0)return -1;
    int ans = FirstIndex(arr+1,x,n-1);
    if(arr[0]==x)return ans+1;
    if(ans==-1)return ans;
    return ans+1;
}
int main(){
    int n;
    cout<<"Enter size of the array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter number to find"<<endl;
    int x ;
    cin>>x;
    for(int i=0 ; i<n; i++){
        cin>>arr[i];
    }
    cout<<FirstIndex(arr,x,n);
}