#include <stdio.h>

int main(){
	printf ("Input character: ");
	char c = getchar();
	while (c != EOF){
		putchar (c);
		c = getchar();
	}
	return 0;
}
