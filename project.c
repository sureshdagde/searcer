#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int CreateTable(char CommandWord[][233],int NumberOfTableContent)
{
	char extention[]=".txt";
	int WordCount=0;
	int TableContentCount=3,word=0,WordCharacter=0,flag=1;
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
				word++;
				WordCharacter=0;
				ch=fgetc(AllFile);		
			}
			FileWord[word][WordCharacter]=ch;
			WordCharacter++;
		}
	}
	
	while(WordCount<=word)
	{
		if(!strcmp(FileWord[WordCount],CommandWord[1]))
		{
		flag=0;	
		}
		WordCount++;
	}
	if(flag)
	{
	fputs(CommandWord[1],AllFile);
	fputs(".",AllFile);	
	strcat(CommandWord[1],extention);
	fp=fopen(CommandWord[1],"a");
		while(TableContentCount<=NumberOfTableContent)
		{
			fputs(CommandWord[TableContentCount],fp);
			fputs("\t",fp);
			TableContentCount=TableContentCount+2;
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
	printf(">>");
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
