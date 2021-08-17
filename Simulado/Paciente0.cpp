#include<stdio.h>
#include<stdlib.h>

//Paciente Zero
int main()
{
/*N total pessoas; C total linhas; 
P pessoa infectante; qtdI quantos infectados; 
I infectados
*/	
	int N, C, P, qtdI, I;
	int i, j; 
	scanf("%d %d", &N, &C);
	int vet[N+1]; //não vamos usar a posição 0
	
	for(i=0; i<N; i++)	vet[i] = 0; //zera todos os espaços do vetor
	
	for(i=0; i<C; i++)
	{
		scanf("%d %d", &P, &qtdI);
		vet[P]++; //add o score do infectante (se ele só foi infectado 1x ele é o PacienteZero)
		
		for(j=0; j<qtdI; j++) 
		{
			scanf("%d", &I); 
			vet[I]++; 
			vet[I]++;
			//precisa somar duas vezes pq senao ele contabiliza como PacienteZero todos os pacientes que aparecerem
		}
	}
	
	for(i=0; i<N; i++)
	{
		if(vet[i]==1)
		{
			printf("\n%d", i);
		}
	}
	
	return 0;
}
