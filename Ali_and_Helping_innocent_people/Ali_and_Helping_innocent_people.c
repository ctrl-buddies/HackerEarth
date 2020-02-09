//Ali and Helping innocent people
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cartag-948c2b02/description/
#include <stdio.h>

int main(){
char S[10];
scanf("%s", S);
if(((S[0]+S[1])%2==0) && ((S[3]+S[4])%2==0) && ((S[4]+S[5])%2==0) && ((S[7]+S[8])%2==0)){
    if(S[2]=='A' || S[2]=='E'|| S[2]=='I'|| S[2]=='O'|| S[2]=='U'|| S[2]=='Y')
      printf("invalid");
    else 
      printf("valid");
}
else
    printf("invalid");
}
