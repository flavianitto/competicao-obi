#include<stdio.h>
#include<stdlib.h>

//Acelerador de particulas
int main()
{
	int d, resultado;
	scanf("%d", &d);
	resultado = (d-5)%8;
	printf("%d", resultado);
	
	return 0;
}
