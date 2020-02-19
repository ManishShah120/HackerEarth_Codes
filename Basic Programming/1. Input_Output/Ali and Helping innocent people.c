#include<stdio.h>
int main()
{
    int flag = 0;
    char s1[9];
    int num[7];
    scanf("%s", s1);
    
    num[0]=s1[0]-'0';//1
	num[1]=s1[1]-'0';//2
	
	num[2]=s1[3]-'0';//3
	num[3]=s1[4]-'0';//4
	num[4]=s1[5]-'0';//5
	num[5]=s1[7]-'0';//6
	num[6]=s1[8]-'0';//7

	if( ((num[0]+num[1])%2==0) && ((num[2]+num[3])%2==0) && 
	    ((num[3]+num[4])%2==0) && ((num[5]+num[6])%2==0)
	  )
	{
		flag = 1;
	}
	else
	{
	    printf("invalid");
	}
	if(flag == 1)
	{
		if(s1[2] == 65 || s1[2] == 69 || s1[2] == 73 || s1[2] == 79 || 
		   s1[2] == 85 || s1[2] == 89)
		{
		   		printf("invalid");
		}
		else
		{
				printf("valid");
		}   
	}
	return 0;
}
