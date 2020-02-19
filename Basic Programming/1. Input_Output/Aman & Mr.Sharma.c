#include<stdio.h>
int main()
{
    float pie = 22.0/7;
	int i,count = 0;
	long long d,r,x,tm;
	scanf("%lld", &d);
	for(i=0;i<d;i++)
	{
	    tm=0;
		scanf("%lld", &r);
		scanf("%lld", &x);
		tm = 100 * x;
		long circle = 2 * pie *r;
		if(tm >= circle)
		{
			count++;
		}
	}
	printf("%d",count);	
	return 0;
}
