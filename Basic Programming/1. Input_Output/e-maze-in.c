#include<stdio.h>
#include<stdlib.h>
int main()
{
    int input,i;
    char str[200];
    int x,y,l=0,r=0,u=0,d=0;
    scanf("%s", str);
    for(i=0;str[i] != '\0';i++)
    {
        if(str[i] == 'L')
        {
            l--;
        }
        else if(str[i] == 'R')
        {
            r++;
        }
        else if(str[i] == 'U')
        {
            u++;
        }
        else
        {
            d--;
        }
    }
    printf("%d %d",l+r,u+d);
    return 0;
}
