#include<stdio.h>
int main()
{
  int a = 21,u,c;
  while(1)
  {
      printf("Number of apples left = %d\n", a);
	  printf("Pick 1 \n 2 \n 3 \n 4");
	  scanf("%d",&u);
	  if(u>4||u<1)
	  continue;
	  a = a-u;
	  printf("Number of apples%d\n : ",u);
	  c = 5-u;
	  printf("Out of which computer pick %d\n : ",c);
	  a=a-c;
	  if(a==1)
	  {
	    printf("\n Number of matches left = %d\n",a);
	    printf("oh you lost the game");
	    break;
      }
   }
  return 0;
}
	
	
