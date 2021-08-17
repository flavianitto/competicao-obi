#include<stdio.h>
#include<stdlib.h>

int main()
{
	int l, c, tipo1, tipo2, i, j;
	scanf("%d", &l);
	scanf("%d", &c);
	
	//calculando tipo1
	for(i=0; i<l; i++)
	{
		tipo1 = (l*c) + (l-1)*(c-1);
	}
	//calculando tipo2
	for(j=0; j<c; j++)
	{
		tipo2 = (l-1)*2 + (c-1)*2;
	}
	
	printf("%d\n%d", tipo1, tipo2);
}
