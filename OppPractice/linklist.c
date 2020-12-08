#include <stdio.h>

struct emp {
	int id;
	char name[12];
	struct  emp * next;
	
	
};

void create(struct emp * current , int  count){
	
}

void Del(struct emp * base , int  count){
	struct emp * current;
	int x = 0;
	for  (x = 1 ;  x <= count , x ++){
		current = base->
	}
	
}

int main(){
	
	struct emp * base = NULL;
	struct emp * current = NULL;
	int count = 0;
	
	base = (struct emp *)malloc (sizeof (struct emp));
	
	base-> id = 1;
	
	printf (" Base adress is %i ", base->id);
	
	free (base);
	return 0;
	
}
