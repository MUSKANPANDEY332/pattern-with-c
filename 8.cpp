#include<stdio.h>
int main()
{
	int x,y,a=2;
	for(x=0;x<6;x++)
	{
		for(y=0;y<7;y++)
		{
			if((x==0&&y%3!=0)||(x==1&&y%3==0)||(x-y==2)||(x+y==8))
			{
				printf("%c",a);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
