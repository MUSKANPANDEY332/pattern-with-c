#include<stdio.h>
int main()
{
	int n=5,i,j,a=2,x=n/2+1,y=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1||j==n||i==1||i==n)
			printf("%c",a);
			else
			printf(" ");
			
		}
		printf("\t\n");
	}
	printf("\n");

	for(i=1;i<=n;i++)
	{    
	 printf("\t");
		for(j=1;j<=n/2+1;j++)
		{
			if(j==x||j==1)
			printf("%c",a);
			else
			printf(" ");
		}
		if(i<=n/2)
		x--;
		else
		x++;
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{   
	printf("\t\t");
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||i==n/2+1||(j==1&&i<=n/2+1)||(j==n&&i>n/2+1))
			printf("%c",a);
			else
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		printf("\t\t\t");
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==n/2+1)
			printf("%c",a);
			else
			printf(" ");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		printf("\t\t\t\t");
		for(j=1;j<=n/2+1;j++)
		{
			if(j==1||i==1||i==n/2+1||(i<=n/2&&j==n/2+1)||j==y)
			printf("%c",a);
			else
			printf(" ");
		}
		if(i>n/2)
		y++;
		printf("\n");
	}
	return 0;
	}
