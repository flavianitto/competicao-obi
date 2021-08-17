#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, div=0, i;
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		{
			div++;
		}
	}
	printf("%d", div);
	
	return 0;
}
