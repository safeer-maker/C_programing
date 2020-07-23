#include <stdio.h>
#define start 0
#define end 300
#define del 30

int main(){
	float f;
	for (f= start; f < end; f+=del)
		printf ("%3.0f  %.2f\n", f, (5.0/9)*(f+32));
	
}
