#include <stdio.h>

int main(){
	int x = 1;
	int *y = &x; 

//	*(y+1) = 0;
	x = x <<31;
	
	printf ("value of x %i ", *y);
	
	return 0 ;
}
