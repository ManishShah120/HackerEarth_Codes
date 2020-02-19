#include<stdio.h>
void conject(int);
int main()
{
    long long n,i,j,flag = 0,m;
    int t;
    scanf("%lld", &t);
    for(j=0;j<t;j++)
    {
        scanf("%d", &n);
        if(n%2==0)
        {
            printf("YES\n");
        }
        else
        {
            n=3*n+1;
            if(n%2==0)
            {
                printf("YES\n");
            }
        }
    }
    return 0;
}
