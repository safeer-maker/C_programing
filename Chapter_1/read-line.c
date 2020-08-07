#include <stdio.h>


char* string(){
	char sam[20] = "sam\0";
	
	return &sam[0];
}

int main(){
	//char sam = 's';
	char * psam = string();
	psam[99] = '\0';
	char sam2[3];
//	sam2 = &psam;
	printf ("value of pointer is %s \n", psam);
	
	/*
	printf ("Enter string ");
	char str[100];
	gets (str);
	printf ("Value in Sting is : %s \n", str);
*/

	return 0;
}



