#include<stdio.h>
#include<stdlib.h>

//OBI - Times (usando recursividade) TA COM ERRO

//função busca
void busca(int pessoa, int equipe)
{
	int i;
	time[pessoa]=equipe;
	for(i=0; i<q[pessoa]; i++)
	{
		if(time[desg[pessoa[i]]]== 0)
		{
			busca(desg[pessoa[i]], 3-equipe);
		}
	}
}

//função principal
int main()
{
	int pessoa, equipe, j;
	
	scanf("%d", &pessoa);
	int q[pessoa], time[pessoa], desg[pessoa][pessoa-1];
	
	for(i=0; i<pessoa; i++)
	{
		for(j=0; j<pessoa-1; j++)
		scanf("%d %d", &desg[i][j])
	}
	
	busca(1,1);
	
	for(i=1; i<=pessoa; i++)
	{
		if(time[i]==1)
		{
			printf("\n%d", i);
		}
		if(time[i]==2)
		{
			printf("\n%d", i);
		}
	}
	
	return 0;
}
