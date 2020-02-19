#include<stdio.h>
int main()
{
	long arr[100000];
	long i,n,number,size,value;
	scanf("%ld", &size);
	for(i=0;i<size;i++)
	{
		scanf("%ld", &arr[i]);
	}
	value = arr[size-1];
	number = value%10;
	if(number%10==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
