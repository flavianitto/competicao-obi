#include<stdio.h>
#include<stdlib.h>

//Dario ou Xerxes
int main()
{
	int N, D, X, i, dario=0, xerxes=0;
	scanf("%d", &N);
	
	for(i=0; i<N; i++)
	{
		scanf("%d %d", &D, &X);
		switch(D)
		{
			case 0:	if(X==1 || X==2) dario++; if(X==3 || X==4) xerxes++; break;
			case 1:	if(X==2 || X==3) dario++; if(X==4 || X==0) xerxes++; break;
			case 2:	if(X==3 || X==4) dario++; if(X==0 || X==1) xerxes++; break;
			case 3:	if(X==4 || X==0) dario++; if(X==1 || X==2) xerxes++; break;
			case 4:	if(X==0 || X==1) dario++; if(X==2 || X==3) xerxes++; break;
			default: puts("invalido"); break;
		}
	}
	if(dario>xerxes)
	{
		puts("\ndario");
	}
	if(xerxes>dario)
	{
		puts("\nxerxes");
	}
}
