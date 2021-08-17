#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int N, M, D, x=0, y=0;
	char C;
	
	scanf("%d %d", &N, &M);
	
	for(int i=0; i<N+1; i++)
	{
		scanf("%c %d\n", &C, &D);
	
		if ((C == 'N') || (C == 'S'))
		{
			y += D;
			D = sqrt(pow(x,2)+(pow(y,2)));
			if(D > M)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}						
		}
		
		if ((C == 'L') || (C == 'O'))
		{
			x += D;
			D = sqrt(pow(x,2)+(pow(y,2)));
			if(D > M)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}							
		}
					
	}
	
	system("PAUSE");
	return 0;
}
