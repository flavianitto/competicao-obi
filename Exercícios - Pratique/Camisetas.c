#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, p, m, i, contp=0, contm=0;
	scanf("%d", &n);
	int t[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &t[i]);
		if(t[i] == 1) contp++;
		if(t[i] == 2) contm++;
	}
	
	scanf("%d", &p);
	scanf("%d", &m);
	
	if(contp >= p && contm >= m) printf("S");
	else printf("N");
}
