#include<bits/stdc++.h>
using namespace std;

void removeX(char *input , int len){
    if(len<=0)return;
    removeX(input+1,len-1);
    if(input[0]=='x'){
        for(int i=1 ; i<=len ; i++){
            input[i-1]=input[i];
        }
    }
    return;
}
int main() {
    char input[100];
    cin.getline(input, 100);
    int len = 0 ;
    while(input[len]!='\0')len++;
    removeX(input,len);
    cout << input << endl;
}
