#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int n, divisore, numDiv;
	bool cont = true;

	do
	{	
		printf("Scrivi un numero maggiore di 0\n");
		scanf("%d", &n);
		if(n>0)
		{
			divisore = n;
			while(divisore>0)
			{
				numDiv = n%divisore;
				if(numDiv==0)
				{
					printf("%d\n", divisore);
				}
				divisore = divisore-1;
			}
		}
		else
		{
			cont = false;
		}
	}
		while(cont==true);
		printf("Il numero e' uguale a 0!\n");
		
}
