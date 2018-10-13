/*#include <stdio.h>
#include <math.h>
 int main()
  {
    double x,n,i=1;
    double sum=1;
      printf("enter the how many number\n");
        scanf("%lf",&n);
        printf("enter the value of x\n");
        scanf("%lf",&x);
        while(i<n)
        {		
               	 sum=sum+(i/pow(x,i));
            i++;
            

        }
        
        printf("sum of the term is =%lf\n%lf ",sum,i);
  }*/
/*
   
   #include <stdio.h>
#include <math.h>
 int main()
  {
  char c;
  int count=0;
  while((c=getchar())!=EOF)
  {
  	count++;
  }     
  printf("%d",count);
}*/
 /* #include <stdio.h>
     int main()
   {
   	  float	 n=0,sum=0;
   	   while(1)
   	   {
   	   	printf("enter no\n");
   	   	scanf("%f",&n);
   	   	sum=sum+n;
   	   	printf("sum is=%f\n",sum);
   	   }
   }*/
   	 #include <math.h>
   #include <stdio.h>
     int main()
     
     
     { 
     int a,b, c;   int choice;
     	  printf("\n 1:add");
          printf("\n 2:subtration");
          printf("\n 3:ceiling");
          printf("\n 4:Exit");
          printf("\n 5:square root"); 
          while(1)
          {
          printf("\n enter your choice:");
          
          scanf("%d",&choice);
          switch(choice)
          {
           case 1:
                
           printf("%lf",pow(2,4));
              
           case 5:
                printf("\n %lf",sqrt(16));
              
           case 2:     
                printf("\n %lf",floor(3.56));
                break;
           case 3:
                printf("\n %lf",ceil(3.56));
                break;
            case 4:    
                
                exit(0);
                break;
           }
      }    
  }      



/*#include <stdio.h>
int main()
  {
  	int p=3.14,r,h,surfacearea,volume;
  	 printf("enter the radiue\n");
  	 scanf("%d%d",&r,&h);
  	 surfacearea=2*p*r*r+2*p*r*h;
  	 printf("surface area of cylinder=%d\n",surfacearea);
  	 volume=p*r*r*h;
  	 printf("volume of cylinder is=%d\n",volume);
  }
*/

/*#include <stdio.h>
  int main()
  {
  	float c,f,k;
  	 printf("enter the temoerature in farind hight\n");
  	 scanf("%f",&f);
  	 c=0.5555*(f-32);
  	 printf("temperature in celciase is=%f\n",c);
  	  k=c+273.15;
  	  printf("temperature in keliven=%f",k);
  }

*//*
 #include <stdio.h>
  int main()
  {
  	int v,u,a,t,s;
  	printf("enter the intial accliratio time and volicity\n");
  	scanf("%d%d%d",&a,&t,&u);
  	v=u+a*t;
  	printf("final voliciyty is=%d\n",v);
  	s=u+a*t*t;
  	printf("final time is=%d\n",s);

  }





*/
















