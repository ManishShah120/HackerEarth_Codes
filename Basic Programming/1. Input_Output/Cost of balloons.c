#include<stdio.h>
int main()
{
    int t,cg,cp,n,j,i;
    int dec1,dec2;
    int count1=0,count2=0,sum;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        if(i%2==0)
        {
            count1=0,count2=0;
            scanf("%d", &cg);
            scanf("%d", &cp);
            scanf("%d", &n);
            for(j=0;j<n;j++)
            {
                scanf("%d", &dec1);
                if(dec1 == 1)
                {
                    count1++;
                }
                scanf("%d", &dec2);
                if(dec2 == 1)
                {
                    count2++;
                }
            }
            sum=cg*count1 + cp*count2;
            printf("%d\n",sum);
        }
        else
        {
            count1=0,count2=0;
            scanf("%d", &cg);
            scanf("%d", &cp);
            scanf("%d", &n);
            for(j=0;j<n;j++)
            {
                scanf("%d", &dec1);
                if(dec1 == 1)
                {
                    count1++;
                }
                scanf("%d", &dec2);
                if(dec2 == 1)
                {
                    count2++;
                }
            }
            sum=cp*count1 + cg*count2;
            printf("%d\n",sum);
        }
    }
    return 0;
}
