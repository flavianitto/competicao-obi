#include<stdio.h>
#include<string.h>

int main()
{
	int t, i, j, tam, valido, a;
	char linha[100001], pilha[100001];
	
	scanf("%d", &t);
	
	for(i=0; i<t; i++)
	{
		scanf("%s", linha);
		tam = strlen(linha);
		a=0;
		valido=1;

		for(j=0; j<tam&&valido; j++) //enquanto valido for 1
		{
			if(linha[j]=='('||linha[j]=='{'||linha[j]=='[')
			{
				pilha[a] = linha[j];
				a++;
			}
			else
			{
				switch(linha[j])
				{
					case ')':
					{
						if(a>0 && pilha[a-1]=='(') 
						{
							a--;
						}
						else 
						{
							valido = 0;
						}				
					}break;
					
					case '}':
					{
						if(a>0 && pilha[a-1]=='{')
						{
							a--;
						}
						else 
						{
							valido = 0;
						}
					}break;
					
					case ']':
					{
						if(a>0 && pilha[a-1]=='[')
						{
							a--;
						}
						else 
						{
							valido = 0;
						}		
					}break;					
				}
							
			}			
		}
		if(valido && a==0)
		{
			puts("S");	
		}
		else //pilha tem que estar vazia
		{
			puts("N");
		}	
	}	
	
	return 0;
}
