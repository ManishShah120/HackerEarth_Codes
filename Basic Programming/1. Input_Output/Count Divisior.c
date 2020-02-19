#include<stdio.h>
int main()
{
    int l,r,k,i,count = 0;
    
    scanf("%d", &l);
    scanf("%d", &r);
    scanf("%d", &k);
    
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
