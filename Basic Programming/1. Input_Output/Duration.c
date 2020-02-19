#include<stdio.h>
int main()
{
    int n,i;
    int sh,sm,eh,em;
    int wh;
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d", &sh);
        sh = sh * 60;
        scanf("%d", &sm);
        scanf("%d", &eh);
        eh = eh * 60;
        scanf("%d", &em);
        wh = (eh+em) - (sh+sm);
        if(wh < 60)
        {
            printf("\n%d %d",0,wh);
        }
        else
        {
           //hr = wh/60;
           //m = wh%60;
           printf("\n%d %d",wh/60,wh%60);
        }
        sh=0,sm=0,eh=0,em=0,wh=0;
    }
    return 0;
}
