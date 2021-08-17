#include<stdio.h>
#include<stdlib.h>
#define MAX 100000

typedef struct par
{
	int h;
	int pos;
}PAR;
PAR papel[MAX];
int b[MAX+2];

int ordena(const void *a, const void *b)
{
	return (((PAR *)a)->h - ((PAR *)b)->h);
}

int main()
{
	int n, i, a, p, max, nt, ultimo=0;
	scanf("%d", &n);
	b[0] = b[n+1] = 0;
	
	for(i=1; i<=n; i++)
	{
		b[i] = 1;
		scanf("%d", &papel[i].h);
		papel[i].pos = i;
	}
	
	qsort(papel, n+1, sizeof(PAR), ordena);
	//for(i=0; i<=n; i++)
	//printf(" h=%d, pos=%d\n", papel[i].h, papel[i].pos);
	
	max = nt = 1;
	for(i=1; i<=n; i++)
	{
		a = papel[i].h;
		p = papel[i].pos;
		if(a != ultimo)
		{
			if(nt > max)
			{
				max = nt;
			}
		}
		b[p] = 0;
		if(b[p-1] && b[p+1]) nt++;
		if(!b[p-1] && !b[p+1]) nt--;
		
		//printf("p=%d b-1=%d b+1=%d and nt=%d, max=%d\n", p, b[p-1], b[p+1], nt, max);
	}
	printf("%d", max+1);
	return 0;
}


