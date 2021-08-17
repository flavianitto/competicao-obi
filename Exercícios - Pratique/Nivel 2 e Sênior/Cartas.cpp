#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1, n2, n3, n4, n5;
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	if(n1>n2&&n2>n3&&n3>n4&&n4>n5)
	{
		puts("D");
	}
	
	else if(n1<n2&&n2<n3&&n3<n4&&n4<n5)	
	{
		puts("C");
	}
	else
	{
		puts("N");
	}

}
