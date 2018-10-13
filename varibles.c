#include<stdio.h>
 int main()
 {   /*varible diclaration*/
     int x,y,z,a;
     /*displaying the manu*/
     printf("enyer the choice\n");
     printf("1.x=y \n");
     printf("2.x/y=a\n");
     printf("3.x<y\n");
     printf("inter the two number\n");
    
     scanf("%d%d%d%d",&x,&y,&z,&a);
     switch(z)
     {
     	case 1 : 
             if(x==y){
               printf("%d is equei to %d\n",x,y);
             }else{
               printf("%d is not equel to %d\n",x,y);
             }
     	   break;
               
     	 case 2:
                    if(a=x%y)
                 {printf("reminder is\ns",a);}
                     if(a=x/y)
                 {printf("question is\n",a);}
              break;
          case 3:
                   if(x<y)
                      {
                         printf("number%d is less than%d\n",x,y);
                      }
                     else
                     {
                           printf("number %d is not less than %d",x,y);
                     }
                     break; 
                      

     }
    

 }