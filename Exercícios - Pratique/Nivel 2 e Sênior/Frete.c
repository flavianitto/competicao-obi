#include<stdio.h>
#define MAX 1001
#define BIG 1000000 //valor "infinito" inicial

int frete[MAX];
int marca[MAX];
int cidade[MAX][MAX];

//funcao para encontrar vertice com menor valor de frete e que ainda não foi "percorrido"
int mincusto(int N)
{
	int i, menor=N;
	for(i=N-1; i>1; i--)
	{
		if(frete[i] < frete[menor] && marca[i] == 0)
		{
			menor = i;
		}
	}
	if(menor != N) // se não existirem mais vertices faz menor = -1
	{
		return(menor);
	}
	else
	{
		return(-1);
	}
}

int main()
{
	int i, j, N, M, A, B, C, cand;
	scanf("%d %d", &N, &M);
	for(i=0; i<=N; i++)
	{
		for(j=0; j<=N; j++)
		{
			cidade[i][j] = BIG;
		}
	}
	for(i=0; i<M; i++)
	{
		scanf("%d %d %d", &A, &B, &C);
		cidade[A][B] = cidade[B][A] = C;
	}
	for(i=1; i<=N; i++)
	{
		cidade[i][i] = 0;
		frete[i] = cidade[1][i];
	}
	frete[1] = 0;
	for(i=1; i<=N; i++)
	{
		marca[i] = 0;
	}
	
	cand = 1;
	while(cand >= 0)
	{
		for(i=1; i<=N; i++)
		{
			if(cidade[cand][i] < BIG)
			{
				if(frete[i] > frete[cand] + cidade[cand][i])
				{
					frete[i] = frete[cand] + cidade[cand][i];
					cidade[cand][i] = frete[i];
				}
			}
		}
		marca[cand] = 1;
		cand = mincusto(N);
	}
	printf("%d\n", frete[N]);
	return 0;
}
