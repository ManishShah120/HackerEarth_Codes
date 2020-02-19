#include<stdio.h>
#include<stdlib.h>
int main()
{
    int liftA=0,liftB=7,i,j;
    int t,n;
    int sum1=0,sum2=0;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        sum1 = abs(liftA-n);
        sum2 = abs(liftB-n);
        if(sum1<sum2)
        {
            liftA = n;
            printf("\nA");
        }
        else if(sum1>sum2)
        {
            liftB = n;
            printf("\nB");
        }
        else
        {
            liftA = n;
            printf("\nA");
        }
        sum1=0,sum2=0;
    }
    return 0;
}
