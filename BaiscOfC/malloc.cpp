# include <stdio.h>
#include <stdlib.h>

int main(){
	
	char * cptr = NULL;
	cptr =  (char*)malloc (10*sizeof(char));
	
	printf ("Enter the word ");
	scanf ("%s", cptr);
	
	printf ("\n Input is : %s", cptr);
	
	free (cptr);
	return 0;
}
