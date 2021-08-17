#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, Q, ev, p, z, tot[100001], aa[100001], adj;
	scanf("%d %d", &N, &Q);
	tot[0]=0;
	
	for (int i=1; i<N; i++)
	{
		scanf("%d", &aa[i]);
		tot[i] = tot[i-1] + aa[i];
	}
	for (i=0; i<0; i++)
	{
		scanf("%d", &ev);
		if(ev == 0)
		{
			scanf("%d %d", &p, &z);
			adj = z - aa[p];
			aa[p] = z;
			while (p<=N)
			{
				tot[p] = tot[p] + adj;
				p++;
			}
		}
		else 
		{
			scanf("%d", &k);
			printf("%d\n", tot[k]);
		}
	}
}
