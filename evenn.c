/*#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter the number\n");
	scanf("%d",&n);
	 while(i<=n)
	  {
	    
	  	if(i%2==0)
	      printf("%d\t",i);
	      i++;
	    }

	       
}*/
/*	    #include<stdio.h>
int main()
{
	int x,y,sum=0;
printf("enter the x and y");
scanf("%d%d",&x,&y);
while(x<=y)
{
	sum=sum+x;
	x++; 
}
printf("%d",sum);
}*/
/*	    #include<stdio.h>
int main()
{
	int x,n,power=1,i=1;
printf("enter the x and n");
scanf("%d%d",&x,&n);
while(i<=n)
{
	power=power*x;
	i++; 
}
printf("%d",power);
}

*/
 #include<stdio.h>
int main()
{
	char character;
	int n,i=1;
printf("enter the character and n");
scanf("%c%d",&character,&n);
while(i<=n)
{
printf("%c",character+i);
	i++; 
}

}