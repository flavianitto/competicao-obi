#include<stdio.h>

int main()
{
	int b, vetor[10], i;
	for(i=0; i<9; i++) 		vetor[i] = 0;

	for(i=0; i<8; i++)
	{
		scanf("%d ", &b);
		vetor[b]++;
		
		if(vetor[b] == 5)
		{
			puts("N");
			return 0;
		}

	}
	puts("S");
	return 0;
}
