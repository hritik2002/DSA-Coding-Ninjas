#include<bits/stdc++.h>
using namespace std;
int SumOfArray(int *arr , int n){
    if(n==0)
    return 0;
    return arr[0] + SumOfArray(arr+1,n-1);
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
     for(int i=0 ; i<n ; i++)
    cin>>arr[i];
    cout<<"Sum of arr is "<<SumOfArray(arr,n);
}

