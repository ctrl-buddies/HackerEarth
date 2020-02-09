//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/best-index-1-45a2f8ff/
// time duration exeeded for large amount.

#include<stdio.h>
void main()
{
    long long n;
    scanf("%lld",&n);
    long long a[100001],i,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long t,m,k,sum;
    for(i=0;i<n;i++){
        k=i;
        t=1;
        sum=0;
        while((k+t)<=n){
            m=t;
            while(m>0){
                sum+=a[k];
                m--;
                k++;
            }
        t++;
        }
            if(i==0)
                max=sum;
            if(sum>max)
                max=sum;
    }
    printf("%lld",max);
}
