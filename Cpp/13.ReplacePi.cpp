#include<bits/stdc++.h>
using namespace std;

// sample input
// xpix
// sample output
// x3.14x

void replacePi(char *input,int len){
    if(len<=0)return ;
    replacePi(input+1,len-1);
    if(input[0]=='p'&&input[1]=='i'){
        for(int i=len ; i>=2 ; i--){
            input[i+2] = input[i];
        }
        input[1]='.';
        input[0]='3';
        input[2]='1';
        input[3]='4';
    }
    return;
}


int main(){

   char input[10000];
    cin.getline(input, 10000);
    int len = 0 ;
    while(input[len]!='0')len++;
    replacePi(input,len);
    cout << input << endl;
    return 0;
}
