// Remove Duplicates Recursively
#include <bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char s,int len){
    if(len==0||len==1)return;
    if(s[0]==s[1]){
        for(int i=1 ; i<len ; i++){
            s[i] = s[i+1];
        }
    }
    return removeConsecutiveDuplicates(s+1,len-1);
}


int main() {
    char s[100000];
    cin >> s;
    int len = 0 ;
    while(s[len]!='\0')len++;
    removeConsecutiveDuplicates(s,len);
    cout << s << endl;
}