#include<stdio.h>
 void main()
 {
   int d,m,y, valid=1,leap=0;
     printf("enter the date month year");
     scanf("%d%d%d",&d,&m,&y);
     if((d<=0)||(d>=31)||(m<=0)||(m>=12)||(y<=0))
     	valid=1;
     else((y%400==0)||(y%4==0)&&(y%100 !=0));
     	leap=0;
      switch(m)
      {
      	            
      }
        if(valid==1)
      {printf("\n date  is valid");}
        else (valid==0);
        	{printf("\n date is invalid");}

 }