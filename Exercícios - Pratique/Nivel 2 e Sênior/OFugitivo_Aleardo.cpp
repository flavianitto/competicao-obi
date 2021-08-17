#include<stdio.h>
#include<math.h>

int main()
{
	float dist=0, M;
	int N, D, x=0, y=0, count=0;
	char C[4];
	
	scanf("%d %f", &N, &M);
	for (int i=0; i<N; i++)
	{
		scanf("%s %d", C, &D);
		
		switch(C[0])
		{
			case 'N' : y += D; break;
			case 'S' : y -= D; break;
			case 'L' : x += D; break;
			case 'O' : x -= D; break;
		}
		D = sqrt((float)(x)*x + (float)(y)*y); //casting do x e do y (transforma eles em float)
		if (D > M)
		{
			count = 1;
		}
	}
	printf("%d", count);
	return 0;
}
