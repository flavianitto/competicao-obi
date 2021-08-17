#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, x, y, ponto[500][500], cont=0, xmaior=0, ymaior=0;
	scanf("%d\n", &N);
	
	for(int i=0; i<N; i++)
	{
		scanf("%d %d", &x, &y);
		ponto[x][y]++; //guarda que caiu mais um raio em (x,y)
		
		//definindo o tamanho da matriz
		if(x > xmaior)
		{
			xmaior += x;
		}
		if(y > ymaior)
		{
			ymaior += y;
		}
	}
	//verificando quantos raios tem em cada (x,y)		
	for(int j=0; j<=xmaior; j++)
	{
		for(int k=0; k<=ymaior; k++)
		{
			if(ponto[j][k]>1)
			{
				cont++;
			}
		}
	}
	
	if(cont>=1)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
