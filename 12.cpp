#include<stdio.h>
int main()
{
   int n=7,x=n/2,i,j;
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n;j++)
      {
      	if(j<=x||j>=n/2+x)
      	{
      		printf("#");
		  }
		  else
		  {
		  	printf("< ");
		  }
	  }
	  printf("\n");
	  if(i<=n/2)
	  x--;
	  else
	  x++;
   }	  
   return 0;                   
}
