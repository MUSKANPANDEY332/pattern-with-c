#include<stdio.h>
int main()
{
	int waveheight=4;
	int wl=4;
	int wh=waveheight-1;
	int x=wh;
	int i,j;
	for(i=0;i<=wh;i++)
	{
		for(j=0;j<=wh*wl*2;j++)
		{
			if(j%(wh*2)==x||j%(wh*2)==wh+1)
			{
				printf("@");
				
			}
			else
			{
				printf(" ");
			}
		}
		x--;
		printf("\n");
	}
	return 0;
}
