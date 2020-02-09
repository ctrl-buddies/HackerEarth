//this code works for small values but not working for large values
// PLZZ EXPLAIN ME WHY???

#include<stdio.h>
void main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n],b[n],i;
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++){
        long long int sum=0,t=1,m,k=i;
        while((k+t)<=n){
        m=t;
        while(m>0){
            sum+=a[k];
            k++;
            m--;
        }
        t++;
        }
        b[i]=sum;
    }
    long long int max=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    printf("%lld",max);
}
