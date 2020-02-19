#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,count =0;
    scanf("%d", &n);
    for(i=1;n!=0;i++)
    {
        count = count + i;
        if(count >= n)
        {
            printf("Patlu");
            break;
        }
        count = count + 2*i;
        if(count >= n)
        {
            printf("Motu");
            break;
        }
    }
return 0;
}
