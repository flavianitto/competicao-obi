#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, c, m, x, i;
	
	scanf("%d %d %d", &n, &c, &m);
	int vetor[n];
	
	for(i=0; i<n; i++)
	{
		vetor[i] = 0;
	}
	
	for(i=0; i<c; i++)
	{
		scanf("%d", &x);
		vetor[x] = 2;
	}
	
	for(i=0; i<m; i++)
	{
		scanf("%d", &x);
		vetor[x]--;
		if(vetor[x] == 1)
		{
			c--;
		}
	}

	printf("%d", c);
	
	return 0;
}
