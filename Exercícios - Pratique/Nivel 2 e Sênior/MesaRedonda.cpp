#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = a%3;
	b = b%3;
	
	if(b == a)
	{
		b = (b+1)%3;
	}
	printf("%d \n", 3-a-b);
	
	system("PAUSE");
}
