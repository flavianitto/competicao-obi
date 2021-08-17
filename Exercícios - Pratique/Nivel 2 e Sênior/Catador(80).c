#include<stdio.h>

int main()
{
	int i, j, k, min, max, n, m, c;
	long int count;
	int valores[100005], balde[100005];
	
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++)
	{
		scanf("%d", &balde[i]);
		valores[i]=0;		
	}
	for(i=0; i<m; i++)
	{
		scanf("%d", &j);
		c = balde[j] - valores[j];
		if(c > 0)
		{
			if(j-c > 0) min = j-c;
			else min = 1;
			
			if(j+c < n) max = j+c;
			else max = n;
			
			for(k=min; k<=max; k++) valores[k]++;
		}
	}
	
	count = 0;
	for(i=1; i<=n; i++)
	{
		k = balde[i] - valores[i];
		if(k > 0) count += k;
	}
	printf("%ld\n", count);
}
