#include<stdio.h>
int main()
{
	int h=4;
	int l=4;
	int i,j,k;
	
	for(i=1;i<=h;i++)
	{
		for(j=1;j<=l;j++)
		{
			if(i!=h)
			printf(" ");
			else
			printf("*");
			for(k=1;k<=4;k++)
			{
				if(i==1||k==1||k==4)
				printf("*");
				else
				printf(" ");
			}
			if(i!=h)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
	return 0;
} 
