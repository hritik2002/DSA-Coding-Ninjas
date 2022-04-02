#include<bits/stdc++.h>
using namespace std;
int Count(int n){
    if(n<=0)
        return 0;
    return 1+Count(n/10);
}
int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    cout<<Count(n);
}