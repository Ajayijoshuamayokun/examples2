#include <stdio.h>

/* Note: nl means newlines, bc means blank count, t mans tab. */


int main()
{
	int c, nl, bc, t;

	nl = 0;
	bc = 0;
	t = 0;
	while (( c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		if (c == '\n')
		        ++bc;
		if (c == '\n')
		         ++t;
	printf("\nBlanks: %d,\t Newlines: %d,\t Tabs: %d,\n", bc, nl, t);	
	return (0);
}	

