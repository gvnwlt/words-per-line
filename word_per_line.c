#include <stdio.h> 

#define IN 1 	/* inside a word */ 
#define OUT 0 	/* outside a word */ 

/* count lines, words, and characters in input */ 

main()
{
	int c, nl, nw, nc, state; 

	state = OUT; 
	nl = nw = nc = 0; 
	printf("Please enter character(s): ");
	while ((c = getchar()) != EOF)
	{
		++nc; 
		if ( c == '\n')
		{
			++nl; 
		}
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT; 
			printf("\n"); 
		}
		else if (state == OUT)
		{
			state = IN; 
			++nw; 	
		}
		putchar(c); 
	}
	printf("\nnew lines: %d words: %d characters: %d\n", nl, nw, nc); 
}