#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int CreateTable(char cmdword[][233],int j)
{
	char extention[]=".txt";
	int len=0;
	int i=3,l=0,k=0,flag=1;
	char FileWord[233][233],ch;
	FILE *fp,*AllFile;
	AllFile=fopen("AllFile.txt","r+");
	if(AllFile==NULL)
	{
		printf("enable to open");
		exit(1);
	}
	else
	{

		while((ch=fgetc(AllFile))!=EOF)
		{
			if(ch=='.')
			{
				l++;
				k=0;
				ch=fgetc(AllFile);		
			}
			FileWord[l][k]=ch;
			k++;
		}
	}
	
	while(len<=l)
	{
		if(!strcmp(FileWord[len],cmdword[1]))
		{
		flag=0;	
		}
		len++;
	}
	if(flag)
	{
	fputs(cmdword[1],AllFile);
	fputs(".",AllFile);	
	strcat(cmdword[1],extention);
	fp=fopen(cmdword[1],"a");
		while(i<=j)
		{
			fputs(cmdword[i],fp);
			fputs("\t",fp);
			i=i+2;
		}
		printf("Table create Succesfully");
	}
	else
	{
		printf("table Allready Exist");
	}
	
return 0;
}
void Insert(char cmdword[][233],int j)
{

}
int main()
{


	int c,i=0,j=0,k=0,flag=1;
	char cmd[22222];
	char cmdword[233][233];
	printf("enter the command");
	scanf("%[^;]s",&cmd);
	while(i<strlen(cmd))
	{
		if(cmd[i]==' ')
		{

			j++;
			k=0;
			i++;
		}
		cmdword[j][k]=cmd[i];
		i++;
		k++;
	}
	
	if(!strcmp(cmdword[0],"create"))
	{
		CreateTable(cmdword,j);
	}
	else
	{
		printf("invalid command");
	}

	if(!strcmp(cmdword[0],"insert"))
	{
		Insert(cmdword,j);
	}
	if(!strcmp(cmdword[0],"update"))
	{
		CreateTable(cmdword,j);
	}
	if(!strcmp(cmdword[0],"delete"))
	{
		CreateTable(cmdword,j);
	}
	
return 0;
}
