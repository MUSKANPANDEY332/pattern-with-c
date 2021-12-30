#include<stdio.h>
int main()
{
	int n=5,i,j,x=1,m=4,y=n/2+1,z=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1||j==n||(j==x||j==n-x+1)&&i<=n/2+1)
			printf("%c",m);
			else
			printf(" ");
		}
		x++;
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		printf("\t");
		for(j=1;j<=n;j++)
		{
			if(j==1||j==n||i==n)
			printf("%c",m);
			else
			printf(" ");
		}
		printf("\n");
	}
		for(i=1;i<=n;i++)
	{   
	printf("\t\t");
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||i==n/2+1||(j==1&&i<=n/2+1)||(j==n&&i>n/2+1))
			printf("%c",m);
			else
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	
		for(i=1;i<=n;i++)
	{    
	 printf("\t\t\t");
		for(j=1;j<=n/2+1;j++)
		{
			if(j==y||j==1)
			printf("%c",m);
			else
			printf(" ");
		}
		if(i<=n/2)
		y--;
		else
		y++;
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("\t\t\t\t");
		for(j=1;j<2*n;j++)
		{
			if(j==z||j==n+i-1)
		{	printf("%c",m);}
			else if(j>=z&&j<=n+i-1&&i==n/2+1)
			{printf("%c",m);}
			else
			{printf(" ");}
			
		}
		printf("\n");
		z--;
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("\t\t\t\t\t\t");
		for(j=1;j<=n;j++)
		{
			if(j==1||j==n||i==j)
			printf("%c",m);
			else
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
	
}
