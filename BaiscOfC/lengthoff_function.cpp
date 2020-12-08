/* length of function in c
*/
#include <stdio.h>

int length_off (int *ad1, int *ad2){
	
	//double length = *((double*)ad1);
	printf ("difference is %i\n" , (int)(ad2-ad1));
	printf ("value of length1 = %p\n" , (ad1));
	printf ("value of length2 = %p\n" , (ad2));
	
	
	return 0;
}

int main (){
	int a = 86755;
	int * aptr = &a;
	
	printf ("value of a is %d\n", *aptr);
	printf ("adress of a is %p\n", &a);
	printf ("adress of ptr  %p\n", aptr);
	
	length_off (aptr, aptr+1);
	
	return 0;
}


