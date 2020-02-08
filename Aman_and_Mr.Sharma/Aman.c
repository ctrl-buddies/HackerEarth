//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/aman-mrsharma/
#include<stdio.h>
int main() {
double d,r,x,a,b;
int j=0;
scanf("%lf",&d);
while(d>0){
    scanf("%lf %lf",&r,&x);
    a=2*r*(22.0/7.0);
    b=100*x;
    if (a <= b)
        j++;
    d--;
}
printf("%d",j);
}
