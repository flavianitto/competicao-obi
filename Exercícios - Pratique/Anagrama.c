#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i, j, cont1=0, cont2, tam1, tam2;
	char frase[105], coringa[105];
	setbuf(stdin, NULL);
	scanf("%s ", &frase);

	scanf("%s", &coringa);
	tam1 = strlen(frase);
	tam2 = strlen(coringa);

	if(tam1!=tam2){
		printf("N");
		return 0;
	}
	
	for(i=0; i<tam1; i++)
	{
		if(frase[i]!='!')
		{
			cont1++;
			
			for(j=0; j<tam1; j++)
			{
					if(i!=j)
					{
						if(frase[i]==frase[j])
						{
							cont1++;
							frase[j]='!';
						}
						
						if(coringa[j]=='*')
						{
							cont2++;
							coringa[j]='$';
						}
						
						else
						{
							if(frase[i]==coringa[j])
							{
								cont2++;
							}
						}
					}
				}
			}
		}
	if(cont1==cont2)
	{
		printf("S");
	}	
	else
	{
		printf("N");
	}
return 0;
}
