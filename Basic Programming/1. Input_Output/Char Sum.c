#include<stdio.h>
int main()
{
	int i,sum=0,n;
	char s1[100];
	scanf("%s", s1);
	for(i=0;s1[i] != '\0';i++)
	{
		n=s1[i]-96;
        sum = sum + n;
	}
    printf("%d",sum);
	return 0;
}
