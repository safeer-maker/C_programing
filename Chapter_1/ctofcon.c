#include <stdio.h>

int conv (){
float far , cent;
int init, final, step;

printf ("In conversion function\n");

init = 0;
final = 300;
step = 30;
far = init;
//for (far = init; far >= final ; far += step){
while (far < final){
	cent = (5/9)*(far+32);
	printf ("%f  %f\n", far , cent);
	far = far + step;
	}
return 0;	
}


int main(){
	printf ("sam favorat %d\n",4 );

	conv();
}
