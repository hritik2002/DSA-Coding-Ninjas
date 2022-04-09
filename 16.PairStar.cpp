#include<bits/stdc++.h>
using namespace std;

/*
Sample Input 1 :
    hello
Sample Output 1:
    hel*lo
Sample Input 2 :
    aaaa
Sample Output 2 :
    a*a*a*a
*/

void pairStar(char *input,int len) {
    // Write your code here
    if(len<= 1)
        return ;
	pairStar(input+1,len-1);
    if(input[0]==input[1])
    {
        for(int i=len ; i>=1 ;i--){
            input[i+1] = input[i];
        }
        input[1] = '*';
    }
    return ;
}

int main() {
   char input[100];
   cin.getline(input, 100);
   int len = strlen(input);
   pairStar(input,len);
   cout << input << endl;
}
