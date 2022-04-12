#include<bits/stdc++.h>
using namespace std;
/*
Sample Input 1 :
    abacd
    a x

Sample Output 1 :
    xbxcd
*/

void replaceCharacter(char input[], char c1, char c2,int len) {
  
    if(len==0)return;
    if(input[0]==c1)input[0]=c2;
    return replaceCharacter(input+1,c1,c2,len-1);
    
}
int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    int len = 0 ;
    while(input[len]!='\0')len++;
    replaceCharacter(input, c1, c2,len);
    cout << input << endl;
}
