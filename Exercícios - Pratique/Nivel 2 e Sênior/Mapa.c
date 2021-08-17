#include<stdio.h>
#define MAX 105

char m[MAX][MAX];
int d[5] = {0, -1, 0, 1, 0};

int main()
{
	int i, j, k, L, C, la, ca, a, b, moveu;
	scanf("%d %d", &L, &C);
	
	for(i=0; i<C+2; i++) m[0][i] = '.';
	for(i=1; i<=L; i++)
	{
		m[i][0] = '.';
		scanf("%s", &m[i][1]);
		m[i][C+1] = '.';
	}
	for(i=0; i<C+2; i++) m[L+1][i] = '.';
	
	for(i=1; i<=L; i++)
	{
		for(j=1; j<=C; j++)
		{
			if(m[i][j] == 'o') {la = i; ca = j;}
		}
	}
	
	moveu = 1;
	while(moveu)
	{
		moveu = 0;
		for(k=0; k<4; k++)
		{
			a = la + d[k];
			b = ca + d[k+1];
			//int d[5] = {0, -1, 0, 1, 0};
			
			if(m[a][b] == 'H')
			{
				m[la][ca] = '.';
				la = a;
				ca = b;
				moveu = 1;
				break;
			}
		}
	}
	printf("%d %d \n", la, ca);
	return 0;
}
