#include<stdio.h>
#include<stdlib.h>

//Chuva - obi

int main()
{
	int n, m;
	char matriz[500][500];
	
	scanf("%d %d\n", &n, &m); //ele lê o enter que eu dou
	if ((n % 2) != 1)
	{
		for(int i=0; i<n; i++)
		{
			int j=0;
			char ch = getchar();
			
			while (ch != '\n')
			{
				wall[i][j] = ch;
				j++;
				ch = getchar();
			}
			for (j=0; j<m; j++)
			{
				if ((wall[i][j] == '.') && (wall[i][j] == 'o'))
				{
					wall[i][j] = 'o';
				}
				
			}
		}
	}
	else 
	{
		printf("Numero invalido de linhas N");
	}
}

/*int main()
{
	int linha, col;
	scanf("%d %d", &linha, &col);
	
	for(int i=0; i<linha; i++)
	{
		int j=0;
		do
		{
			int wall[i][j] = getchar();
			j++;
		}
		while (wall[i][j-1] != '\0');
		wall[i][col] = '\0';
	}
	printf("%d", wall[i][j])
	
	system("PAUSE");
	return 0;
}
/*	getchar é o scanf de char
	uso de função recursiva
	calcular uma função a partir do calculo dela mesma
	f(f(x)), por exemplo
*/
