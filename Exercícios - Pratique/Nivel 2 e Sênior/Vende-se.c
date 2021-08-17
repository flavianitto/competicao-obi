#include<stdio.h>

int ordena(const void *a, const void *b)
{
	return(*(int *)a - *(int *)b);
}

int main()
{
	int n, v, d, i, j, menor, aux;
	int pred[100005];
	
	scanf("%d %d", &n, &v);
	v = n-v-1;
		
	for(i=0; i<n; i++)
	{
		scanf("%d", &pred[i]);
	}
	
	qsort(pred, n, sizeof(int), ordena);
	
	/* se for usar isso tem que comentar o qsort	
	for(i=0; i<n-1; i++)
	{
		menor = i;
		for(j=i+1; j<n; j++)
		{
			if(pred[j] < pred[menor]) menor = j;
		}

		if(menor != i)
		{
			aux = pred[menor];
			pred[menor] = pred[i];
			pred[i] = aux;
		}
	}*/
	
	d = pred[n-1] - pred[0];
	for(i=0; i<n-v; i++)
	{
		if(pred[i+v] - pred[i] < d) d = pred[i+v] - pred[i];
	}
	
	printf("%d\n", d);
	return 0;
	
}
