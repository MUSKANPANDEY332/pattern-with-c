#include<stdio.h>
int main()
{
	int h=5;
	int l=4;
	int i,j,k,s=1,o=2;
	for(i=1;i<=h;i++)
	{
		for(j=1;j<=l;j++)
		{
			for(k=1;k<=o;k++)
			{
				printf(" ");
			}
			printf("0");
			for(k=1;k<=s;k++)
			{
				printf(" ");
			}
			printf("0");
			for(k=1;k<=o;k++)
			{
				printf(" ");
			}
			printf(" ");
		}
		o=(i+1!=h);
		s=(i+1!=h)?3:5;
		printf("\n");
	}
	return 0;
	
}
