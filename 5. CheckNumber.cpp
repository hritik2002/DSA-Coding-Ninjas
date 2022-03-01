//* Sample Input 1 :
//* 3
//* 9 8 10
//* 8
//* Sample Output 1 :
//* true

#include<bits/stdc++.h>
using namespace std;

bool CheckNumber(int *arr , int n,int x){
    if(n==0)
    return false;
    if(arr[0]==x)
    return true;
    return CheckNumber(arr+1,n-1,x);
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    int x;
    for(int i=0 ; i<n ; i++)
    cin>>arr[i];
    cin>>x;
    cout<<CheckNumber(arr,n,x);
}