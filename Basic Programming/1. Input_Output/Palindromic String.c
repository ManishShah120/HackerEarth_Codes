#include<stdio.h>
int main()
{
    char s1[100];
    int i,count=0;
    scanf("%s", s1);
    for(i=0;s1[i] != '\0';i++)
    {
        count++;
    }
    if(s1[0]==s1[count-1])
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}
