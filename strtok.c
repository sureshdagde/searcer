#include<stdio.h>
int main()
{
	char s[233333];
	gets(s);
	char d[];
	d=strtok(s," ");
	printf("%d",strcmp(d,"welcome"));
	return 0;
}