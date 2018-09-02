#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<dirent.h>
#include"mkdir.h"
#include"collection.h"
#include"ShowDir.h"
#include"UseDB.h"
#include"ShowCollection.h"
#include"help.h"
int CreateTable(char [][233],int,char []);
void Insert(char cmdword[][233],int j)
{

}
int main()
{
		char mount[500]="unmount";
	while(1)
	{
	
		int c,i=0,j=0,k=0,flag=1;
		char cmd[22222]={NULL};
		char cmdword[233][233]={NULL};
		printf("\n>>");
		gets(cmd);
		while(i<strlen(cmd))
		{
			if(cmd[i]==' ')
			{

				j++;
				k=0;
				i++;
			}
			if(cmd[i]!=' ') //imp to avoid the white space
			cmdword[j][k]=cmd[i];
			i++;
			k++;
		}

		if(!strcmp(cmdword[0],"help"))
			{
				help();
			}
		else if(!strcmp(cmdword[0],"create") && !strcmp(cmdword[1],"db") && 
			strcmp(cmdword[2],";"))
			{
				CreateDatabase(cmdword[2]);
			}
			//use DBName
		else if(!strcmp(cmdword[0],"use"))
			{	

				if((strlen(cmd))>=5)
				{
					int a=UseDB(cmdword[1]);
					if(a)
					{
						strcpy(mount,cmdword[1]);
					}
					else
					{
						strcpy(mount,"unmount");
					}
				}
				else
				{
					printf("Invalid command");
				}
			
			}

		else if(!strcmp(cmdword[0],"show") && !strcmp(cmdword[1],"dbs"))
			{
				
				ShowDir();
			}
		else if(!strcmp(cmdword[0],"show") && !strcmp(cmdword[1],"c"))
			{
				if(!strcmp(mount,"unmount"))
				{
					printf("please mount database first");
				}
				else
				{
					ShowCollection(mount);
				}
			
			}
		else if(!strcmp(cmdword[0],"create") && cmdword[1]!=NULL && !strcmp(cmdword[1],"c"))
			{
				if(!strcmp(mount,"unmount"))
				{
					printf("please mount database first");
				}
				else
				{
				CreateTable(cmdword,j,mount);
				}
			}
		
		else if(!strcmp(cmdword[0],"exit"))
			{
				
				exit(0);
			}
		else
		{
			printf("invalid command");
		}
	}
/*
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
	}*/
	
return 0;
}
