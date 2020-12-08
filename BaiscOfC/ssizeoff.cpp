#include <stdio.h>

#define sizeo(t) (char*)(&t+1) - (char*)(&t)
#define add(q) printf ("huuuu hahaha");
int main(){
	
	struct sam {
		double aco;
		char alpha;
		int z;
	}sam;
	
	float s,*ptr;
	
	s = 10;
	ptr = &s;
	
	printf ("pointer value : %p\n", ptr);
	
	printf ("pointer value : %p\n", ptr+1);
	int a = sizeo(sam);
	printf ("difference is value : %i\n", a);
	
	return 0;
}
