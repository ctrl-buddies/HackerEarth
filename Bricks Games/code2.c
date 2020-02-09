https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/bricks-game-5140869d/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,motu,patlu=1;
    scanf("%d",&n);
    while(n>0){
        n-=patlu;
        if(n<=0){
            printf("Patlu");
            exit(0);
        }
        motu=patlu*2;
        patlu++;
        n-=motu;
        if(n<=0){
            printf("Motu");
            exit(0);
        }
    }
}
   
