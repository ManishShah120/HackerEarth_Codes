#include<stdio.h>
int main()
{
    long long arr[1000];
    long long i,n,prod=1;
    scanf("%lld", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld", &arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        prod = (prod * arr[i])%1000000007; 
    }
    printf("%lld", prod);
    return 0;
}
