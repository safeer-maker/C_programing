// atoi conversion typer conversion practice

#include <stdio.h>

int main(){
	
	int num =0;
	char inp;
	
	while ((inp = getchar()) != '\n' && (inp >= '0' && inp<= '9' )){
		num = 10 * num + (inp - '0');
		printf ("Value %d\n", num);
	}
	
	return 0;
}
