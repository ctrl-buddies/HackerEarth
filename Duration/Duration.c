#include<stdio.h>
int main() {
    int n;
    int sh,sm,eh,em,th,tm,ttm;
  scanf("%d",&n);
  while(n>0){
      th=0;
    scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    ttm=((eh-sh)*60)+em-sm;
    if(ttm >= 60)
        th=ttm/60;
    tm=ttm-(th*60);
    printf("%d %d\n",th,tm);
    n--;
  }
}
