//this code works for small values but not working for large values
// PLZZ EXPLAIN ME WHY???

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
