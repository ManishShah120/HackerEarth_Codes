#include<stdio.h>
int main()
{
	char str[1000];
	int i,k;
	scanf("%s", str);
	scanf("%d", &k);
	for(i=0;str[i] != '\0';i++)
	{
		//for numbers
		if((str[i] >= 48) && (str[i] <= 57))
		{
			str[i] = ((str[i]-48+k)%10)+48;
		}
	
		//for capital letters
		else if( (str[i] >= 65) && (str[i] <= 90))
		{
			str[i] = ((str[i]-65+k)%26)+65;
		}

		//for small letters
		else if( (str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = ((str[i]-97+k)%26)+97;
		}
	}
	printf("%s",str);
	return 0;
}
