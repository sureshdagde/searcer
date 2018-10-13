#include<stdio.h>
 int main()
  {
    int d,b,f,p;
     printf("enter the number of days and number of books and fine par book\n");
       scanf("%d%d%d",&d,&b,&f);
        p=f*d*b;
         if(d<5)
          {
            printf("fine is %d late",p);
            }
             else if(p>6||p<10)
            {
             printf("fine is %d rupees",p);
              }
     }
