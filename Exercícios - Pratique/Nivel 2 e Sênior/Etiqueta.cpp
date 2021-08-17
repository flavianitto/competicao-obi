#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n, k, c, a[10000];
	int possiveis = n - (c-1);
	int soma[possiveis];
	int soma = 0;
	 
	scanf("%d %d %d\n", &n, &k, &c);

	if(n >= (k*c))
	{
		//recebendo os valores da fita
		for(int i=0; i<n; i++)
		{
			scanf("%d ", &a[i]);	
			printf("%d ", a[i]);
			
			//calculando a soma de todas as possiveis etiquetas
			for (int j=0; j<possiveis; j++)
			{
				if(i==0)
				{
					for(l=0; l<c-1; l++)
					{
						soma += a[i]+a[i+];
						printf("%d", soma);
					}
				}
				else
				{
					soma += a[i]+a[j];
					printf("%d", soma);
				}
			}
		} 
	}
	else
	{
		printf("etiqueta maior que o tamanho da fita");
	}
		
	system("PAUSE");
	return 0;
}

