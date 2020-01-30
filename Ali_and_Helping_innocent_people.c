//Ali and Helping innocent people
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cartag-948c2b02/description/
#include<stdio.h>
void main(){
    char S[10];
    gets(S);
    int flag=0;
        if(S[2]!='A' || S[2]!='E' || S[2]!='I' || S[2]!='O' || S[2]!='U' || S[2]!='Y'){
            flag=1;
            goto Z;
        }
        if(S[6]!='-'){
            flag=1;
            goto Z;
        }
        if((S[0]+S[1])%2!=0 && (S[3]+S[4])%2!=0 && (S[4]+S[5])%2!=0 && (S[5]+S[7])%2!=0 && (S[7]+S[8])%2!=0){
            flag=1;
        }    
    Z:
    if(flag=0)
        printf("valid");
    else
        printf("invalid");
}
