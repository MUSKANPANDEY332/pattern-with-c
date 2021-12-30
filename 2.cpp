#include<stdio.h>
int main()
{
	int waveheight=5;
	int wavelenght=5;
	int i,j,k;
	for(i=1;i<=waveheight;i++)
	{
		for(j=1;j<=wavelenght;j++)
		{
			if(i!=waveheight)
			printf(" ");
			else
			printf("* ");
			
			for(k=1;k<=5;k++)
			{
				if(i==1||k==1||k==5)
				printf("* ");
				else
				printf(" ");
			}
			
			if(i!=waveheight)
			printf(" ");
			else
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
			
