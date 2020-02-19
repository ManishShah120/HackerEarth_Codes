//Back to school
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c)
	{
		printf("%d\n",a);
	}
	else if(b>a && b>c)
	{
		printf("%d\n",b);
	}
	else if(a == b == c)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",c);
	}
	return 0;
}
