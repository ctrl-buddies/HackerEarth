#include<stdio.h>
int main() {
  int sh,sm,eh,em,th=0,tm,tsm,tem,ttm;
  scanf("%d %d %d %d",&sh,&sm,&eh,&em);
  tsm=sh*60+sm;
  tem=eh*60+em;
  ttm=tem-tsm;
  if(ttm%60>0)
    th=ttm%60;
  tm=ttm-th*60;
  printf("%d %d",th,tm);
}
