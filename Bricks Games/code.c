//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/bricks-game-5140869d/
//Bricks Game
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i=1,motu=1,patlu=1;
    scanf("%d",&n);
    if(n>0)
    {
        b:;
        n-=patlu;
        if(n>0) goto a;
        else{
        printf("Patlu");
        exit(0);
        }
        a:;
        motu=patlu*2;
        patlu++;
        n-=motu;
        if(n>0)
        goto b;
        else{
        printf("Motu");
        exit(0);
        }
    }
}
