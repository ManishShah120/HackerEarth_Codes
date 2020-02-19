#include<stdio.h>
int main()
{
    int count=0,i,a[10],rem,sum;
    long long n,m;
    scanf("%lld", &n);
    m=n;
    while(n != 0)
    {
        n /= 10;
        ++count;
    }
	if(count == 10)
    {
        for(i=0;m!=0;i++)
        {
        	a[i] = m%10;
            m = m/10;
        }
		sum = 10*a[0] + 9*a[1] + 8*a[2] + 7*a[3] + 6*a[4] + 5*a[5] + 4*a[6] + 3*a[7] + 2*a[8] + 1*a[9];
        if(sum%11 == 0)
        {
            printf("Legal ISBN");
        }
        else
        {
            printf("Illegal ISBN");
        }
    }
    else
    {
        printf("Illegal ISBN");
    }
    return 0;
}
