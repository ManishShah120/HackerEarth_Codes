#include<stdio.h>
int main()
{
    int i;
    char str[101];
    scanf("%s", str);
    for(i=0;str[i] != '\0';i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else
        {
            str[i] = str[i];
        }
    }
    printf("%s",str);
    return 0;
}
