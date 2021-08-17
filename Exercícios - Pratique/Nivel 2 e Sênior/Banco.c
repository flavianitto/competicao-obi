#include <stdio.h>

int main()
{
	int c, n, t, d, caixa[10], espera=0, i, j, menor;
	
	scanf("%d %d", &c, &n);
	for(i=0; i<c; i++)
	{
		caixa[i]=0;
	}
	
	for(i=0; i<n; i++)
	{
		scanf("%d %d", &t, &d);
		menor = 0;
		
		for(j=1; j<c; j++)
		{
			if(caixa[j] < caixa[menor])
			{
				menor = j; //j é o caixa com o menor instante de disponibilidade
			}
		}
		
		if(caixa[menor] <= t)
		{
			caixa[menor] = t+d;
		}
		else
		{
			if(caixa[menor] > t + 20) //cliente teve que esperar mais que 20min
			{
				espera++;
			}
			caixa[menor] = caixa[menor] + d; //atualizando o tempo do caixa
		}	
	}
	
	printf("%d", espera);
	return 0;
}
