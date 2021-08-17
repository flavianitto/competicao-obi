#include<stdio.h>

typedef struct aresta
{
	int pre;
	int t;
}dep;
dep depende[200000];

int task[50000], segura[50000];

int ordena(const void *p, const void *q)
{
	return (((dep *)p)->pre - ((dep *)q)->pre);
}

void limpa(int a, int i, int b)
{
	while(depende[i].pre == a)
	{
		task[depende[i].t]--;
		i++;
	}
}

int main()
{
	int i, j, n, m, pre, t, escal, possivel;
	int sol[50000], k=0;
	
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++) task[i]=0;
	
	for(i=0; i<m; i++)
	{
		scanf("%d %d", &depende[i].pre, &depende[i].t);
		task[depende[i].t]++;
	}
	
	qsort(depende, m, sizeof(dep), ordena);
	
	j=0;
	for(i=0; i<n; i++)
	{
		while(depende[j].pre < i) j++;
		if(depende[j].pre == i) segura[i] = j;
		else segura[i] = -1;
	}
	
	escal = n;
	possivel = 1;
	
	while(escal && possivel)
	{
		i=0;
		while(i<n && task[i]) i++;
		
		if(i < n)
		{
			sol[k] = i; 
			k++;
			task[i] = -1;
			escal--;
			if(segura[i] != -1) limpa(i, segura[i], m);
		}
		else possivel = 0;
	}
	if(escal) puts("*");
	else
	{
		for(i=0; i<k; i++)
		{
			printf("%d\n", sol[i]);
		}
	}
	
	return 0;
}
