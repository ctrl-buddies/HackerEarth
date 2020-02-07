//this code works for small values but not working for large values
// PLZZ EXPLAIN ME WHY???

#include<stdio.h>

long long int bestindex(int a[],int n,int i)
{
    long long int sum=a[i],m=0,t=2;
    while((i+t)<n)
    {
        while(m<t)
        {
            sum+=a[++i];
            m++;
        }t++;
    }
    return sum;
}

void max(long long int b[],long long int n)
{
    long long int m=b[0];
    for(int i=0;i<n;i++)
    {
        if(b[i]>m)
            m=b[i];
    }
    printf("%lld",m);
}

void main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n],b[n];
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i]=bestindex(a,n,i);
    }
    max(b,n);
}
