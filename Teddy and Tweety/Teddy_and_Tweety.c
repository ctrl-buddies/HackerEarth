//Teddy and Tweety
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/teddy-and-tweety/
/*Teddy has N chocolates. Tweety asks him to give few chocolates to her. Teddy is very generous and kind hearted. So he decides to give all chocolates to Tweety, but only on one condition.

If integer N can be divided into 3 parts, such that these three parts can form sides of an equilateral triangle, then Teddy gives all chocolates to Tweety. Otherwise he won't give any chocolate to her.
*/
#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    if(N%3==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
