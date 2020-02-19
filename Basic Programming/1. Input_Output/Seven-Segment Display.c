#include<stdio.h>
int main()
{
	int t;
	char n[101];
	scanf("%d",&t);
	while(t>0)
	{
		short c=0,i;
		scanf("%s",n);
		for(i=0;n[i]!='\0';i++)
		{
			switch(n[i])
			{
				case '0':c=c+6;break;
				case '1':c=c+2;break;
				case '2':c=c+5;break;
				case '3':c=c+5;break;
				case '4':c=c+4;break;
				case '5':c=c+5;break;
				case '6':c=c+6;break;
				case '7':c=c+3;break;
				case '8':c=c+7;break;
				case '9':c=c+6;break;
				default:break;
			}
		}
		if(c%2==0)
		{
			for(i=0;i<(c/2);i++)
			{
				printf("1");
			}
		}
		else
		{
			c=c-3;
			printf("7");
			for(i=0;i<(c/2);i++)
			{
				printf("1");
			}
		}
		printf("\n");
		t--;
	}
}
