#include<stdio.h>
#include<string.h>
int test(char n) {
  switch(n) {
    case '1' : return 2;
    case '2' : return 5;
    case '3' : return 5;
    case '4' : return 4;
    case '5' : return 5;
    case '6' : return 6;
    case '7' : return 3;
    case '8' : return 7;
    case '9' : return 6;
    case '0' : return 6;
  }
}
int main() {
  int t;
  scanf("%d",&t);
  while (t>0) {
    char c[1000];
    int sum=0;
    scanf("%s",c);
    int i=0;
    while (c[i]!='\0') {
      sum+=test(c[i]);
      i++;
    }
    if(sum%2!=0){
      printf("7");
      sum-=3;
    }
    sum/=2;
    for(i=0;i<sum;i++)
      printf("1");
    printf("\n");
    t--;
  }
}
