#include <stdio.h>

int main()
{
int t;
char magic[] = {67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};
int magiclen = 12;
scanf("%d", &t);
while(t != 0)
{
int n,i,j;
char s[500];
scanf("%d", &n);
scanf("%s", s);
for(i=0; i<n; i++)
{
int nearest = 0;
int len = s[i] - magic[0];
if(len < 0) len *= -1;
for(j=1; j<magiclen; j++)
{
int len1 = s[i] - magic[j];
if(len1 < 0) len1 *= -1;
if(len > len1)
{
len = len1;
nearest = j;
}
else if(len == len1)
{
if(magic[j] < magic[nearest])
{
len = len1;
nearest = j;
}
}
}
printf("%c", magic[nearest]);
}
printf("\n");
--t;
}
return 0;
}
