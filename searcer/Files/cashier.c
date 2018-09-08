#include <stdio.h>
int main()
{            //0     1   2  3
int nota[]={2000,1000,500,200,100,50,20,10,5,2,1};
int amount=0,done=1,i=0,count=0;
	while(1)
	{
		i=0;
		count=0;
	printf("entre ammout");
	scanf("%d",&amount);
	
	while(amount>0)
	{
		if(amount>=nota[i])// 999>=2000 999>=1000   999>=500  
			{
			printf("%d\n",nota[i]);
			amount=amount-nota[i];
			count++;
			i--;
	//	i++;
		}
		i++;//1 2

		

	}
	printf("required note is \t%d\n",count);
}
	return 0;
}