#include<bits/stdc++.h>
using namespace std;
int Power(int n , int p){
    if(p<=0)
    return 1;
    return n*Power(n,p-1);
}
int main(){
    int p , n ;
    cout<<"Enter number , power"<<endl;
    cin>>n>>p;
    cout<<n<<" raise to "<<p<<" is "<<Power(n,p);
}

