#include<stdio.h>
#include<string.h>
int main()
{
	char sstr[100], revStr[100];
	int i, j;
	scanf("%[^\n]s",str);
	j=0;
	for(i=(strlen(str)-1);i>=0;i--)
	revStr[j++]=str[i];
	revStr[j]='\0';
	printf("%s",revStr);
	return 0;
}
