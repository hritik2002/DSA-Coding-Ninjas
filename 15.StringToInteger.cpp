#include<bits/stdc++.h>
using namespace std;
/*
Sample Input 1 :
    00001231
Sample Output 1 :
    1231
*/
// 123

int stringToNumber(char input[],int len) {
    // Write your code here
   
    if(len<=1)return input[0]-48;
    int rec = stringToNumber(input,len-1);
    return ((input[len-1]-48)+rec*10);
}

int main() {
    char input[50];
    cin >> input;
    int len =0 ;
    while(input[len]!='\0')len++;
    cout << stringToNumber(input,len) << endl;
}
