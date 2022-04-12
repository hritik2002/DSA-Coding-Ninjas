#include<bits/stdc++.h>
using namespace std;
int Multiplication(int m, int n){
    return n==0?0:Multiplication(m,n-1)+m;
}
int main(){
    int m , n ;
    cout<<"Enter m and n \n";
    cin>>m>>n;
    cout<<Multiplication(m,n);
}