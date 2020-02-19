#include<stdio.h>
int fact(int);
int main()
{
    int n;
    scanf("%d", &n);
	printf("%d",fact(n));
	return 0;
}
int fact(int n)
{
	int i,fact=1;
	
	if(n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			fact = fact * i;
		}
		return fact;
	}
}
