#include <stdio.h>


int main(){
	
	int n =2544;
	float f = 34.44234;
	double d = 23482348004345;
	
	printf ("int %d\n", n);
	printf ("float %f\n", f);
	printf ("double %lf\n", d);
	printf ("dec %o\n", n);
	printf ("hex %x\n", n);
	
	
	char c[100];
	char * cptr = c;
	printf ("Enter string ");
	scanf ("%s", cptr);
	
	printf ("str = %s" , cptr);
	
	
	return 0;
}
