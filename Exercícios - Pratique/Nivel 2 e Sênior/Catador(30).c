#include<stdio.h>
/* Entradas (copy paste)
10 4
1 2 0 8 4 2 9 8 1 3
9 5 10 6
*/
int main()
{
	long int n, m, i, k, soma=0, indice, min, max;
	
	scanf("%ld %ld", &n , &m);
	
	long int balde[n+1];
	
	for(i=1; i<=n; i++)
	{
		scanf("%ld", &balde[i]);
	}
	
	for(i=0; i<m; i++)
	{
		scanf("%ld", &indice);
		
		min = indice-balde[indice];
		if(min<=0) min=1;
			
		max = indice+balde[indice];
		if(max>n) max=n;			
		
		for(k=min; k<=max; k++)
		{
			if(balde[k]>0)	balde[k]--;	
		}			
	}
	
	for(i=1; i<=n; i++)
	{
		//printf("%ld", balde[i]);
		soma+=balde[i];
	}
	
	printf("%ld\n", soma);
	return 0;
}
