#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct precode
{
	char match[11];
}CODE;

int main()
{
	int i, insuf=0, inpref=0, j, k, l, m, N, size;
	char cod[11], pref[11], suf[11];
	
	scanf("%d", &N);
	CODE sufixos[N], prefixos[N];
	
	for(i=0; i<N; i++)
	{
		scanf("%s", cod);
		for(k=1; k<=10; k++)
		{
			for(j=0; j<inpref; j++)
			{
				m=0;
				while(m<k && cod[m] == prefixos[j].match[10-k+m]) m++;
				if(m==k)
				{
					//printf("found a prefix of lenght %d (%s and %s)\n", k, cod, prefixos[j].match);
					for(l=0; l<inpref; l++)
					{
						m = k;
						while(m<10 && cod[m] == prefixos[l].match[m-k]) m++;
						if(m==10)
						{
							//printf("matched with this prefix %s\n", prefixos[l].match);
							printf("%s\n", cod);
							return (0);
						}
					}
				}
			}
		}
		strcpy(prefixos[inpref].match, cod);
		inpref++;
		//for(m=0; m<inpref; m++); printf("codes are %s\n", prefixos[m].match);
	}
	puts("ok");
	return(0);
}
