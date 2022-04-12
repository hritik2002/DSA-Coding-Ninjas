#include<bits/stdc++.h>
using namespace std;
void Print(int n){
    if(n<=0){
        return ;
    }
    Print(n-1);
    cout<<n<<" ";
    return ;
}
int main(){
    int n;
    cin>>n;
    Print(n);
}