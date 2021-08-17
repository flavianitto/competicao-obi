#include<stdio.h>

//xadrez aleatório - OBI
double fatorial(int n);

int main(void)
{
	int N, T, resultado, fat1, fat2, a=3, b=2;
	double f;
	long long int  fat;
	
	scanf("%d %d", &N, &T);
	switch(T)
	{
		case 0: 
		{
			printf("%d", N);
		}break;
		
		case 1: 
		{
			printf("%d", N*(N-1));	
		}break;
		
		case 2:
		{
			fat = fatorial(N);
			fat1 = fatorial(a);
			fat2 = fatorial(b);
			resultado = fat / fat1 * fat2;
			printf("%d", resultado);
		}break;
	}
}

double fatorial(int n)
{
	double vfat;
	if(n<=1) 
	{
		return (1);
	}
	else 
	{
		vfat = n*fatorial(n-1);
		return(vfat);
	}
}
