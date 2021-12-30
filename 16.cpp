#include<stdio.h>
int main()
{
	int n=5,i,j,m=n/2+1,a=3,b=2;

	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||i==m||j==1&&i>=m||(j==n&&i<m))
			printf("%c",a);
			else
			printf(" ");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n||i+j==n+1)
			printf("%c",b);
			else
			printf(" ");
		}
		printf("\n");
	}

		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n||i+j==n+1)
			printf("%c",b);
			else
			printf(" ");
		}
		printf("\n");
	}
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||i==m||j==1&&i>=m||(j==n&&i<m))
			printf("%c",a);
			else
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}
