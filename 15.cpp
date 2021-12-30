#include<stdio.h>
int main()
{
	int i,j,k,h=3,w=4,r=1,m=1,a=30;
	int s=w*5;
	for(r=1;r<=h;r++)
	{
		for(i=m;i<=w;i++)
		{
			for(j=s;j>=i;j--)
			{
				printf(" ");
			};
			for(k=1;k<=i;k++)
			{
				printf("%c ",a);
			}
			printf("\n");
		}
		m+=2;
		w+=2;
	}
	for(i=1;i<=4;i++)
	{
		for(j=s-3;j>=1;j--)
		{
			printf(" ");
		}
		for(k=1;k<=4;k++)
		{
			printf("| ");
		}
		printf("\n");
	}
	return 0;
}
