#include<bits/stdc++.h>
using namespace std;
bool checkPallindrome(string str , int start , int end){
    if(start>=end)return true;
    bool ans = checkPallindrome(str,start+1,end-1);
    return ans==true?true:false;
    
}
int main(){
    string str ;
    cin>>str;
    cout<<checkPallindrom(str,0,str.length());
}