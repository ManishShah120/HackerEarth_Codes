#include<stdio.h>
int main()
{
    int n;
	int x,y,i;
    scanf("%d", &n);
    scanf("%d", &x);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &y);
        if(y>=x)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
