#include<stdio.h>
int main()
{
  /* varible diclerstion*/
  int x,z;
  /*displaying the manu*/

  printf(" 1.option 1\n");
  printf("2.option 2\n");
  printf("3.option 3\n");
  printf("inter the number\n");
  scanf("%d%d",&x,&z);
  switch(x=z)
  {
    case 1:(x=z);
    printf("if x is equsll to z");
    break;
    case 2:
    printf("option 2 is selected");
    break;
    case 3:
    printf("option 3is selected");
    break;
    defult:
    printf("invaled choice");
  }
	
}