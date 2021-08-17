#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, M, V, i, j, vetor[200000];
	scanf("%d %d", &N, &M);
	
	for(j=1; j<=M; j++)
	{
		vetor[N] = 0;
		scanf("%d %d", &i, &vetor[j]);
		
		switch(i)
		{
			case 1:
			{
				
			}break;
			
			case 2:
			{
				
			}break;
			
			case 3:
			{
				printf("%d", vetor[i]);
			}break;
		}
	}
}

/*
mainset

FRENTE: somar v em i; v-1 em i+1
enquanto 0<V<=N

TRAS: somar v em i; v-1 em i-1
enquanto V>0 e i>=1
*/
