#include<stdio.h>
int main()
{
	int i,j,n=20,a=3;
	for(i=n/2;i<=n;i+=2)
	{
		for(j=1;j<n-i;j+=2)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",a);
		}
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",a);
		}
		printf("\n");
	}
	for(i=n;i>=1;i--)
	{ 
	  for(j=i;j<n;j++)
	  {
	  	printf(" ");
	  }
		for(j=1;j<=(i*2)-1;j++)
		{
			printf("%c",a);
		}
		printf("\n");
	}
	return 0;
}
