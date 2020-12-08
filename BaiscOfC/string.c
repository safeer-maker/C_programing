#include <stdio.h>
#include <string.h>
void main(){

	char str[100]= "safeer";
	char str2[] = "hello";
	strcpy(str,str2);
	//*(str+6) = '\0';
//	*str = "saferr";
	//str[10] = '\0';
	printf ("String value = %s \n", str);
	return 0;
}
