#include <stdio.h>
#include <math.h>


struct point{
int x ;
int y ;
double ans;
};
	
	
struct point makepoint(int x, int y){
	struct point val;
	val.x = x;
	val.y = y;
	val.ans = 25.22;
	return val;
}

struct point addstruct (struct point p1, struct point p2){
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}


int main(){
	
	
	struct rec{
		struct point p1;
		struct point p2;
	} r;
	
//	struct rec r;
	struct point ad ,*add;
	
	r.p1 = makepoint (23,55);
	r.p2 = makepoint (2,99);
	add = & ad;
	(ad)= addstruct(r.p1, r.p2);
	
	if (r.p1.x > r.p2.x)
		printf ("R1 is greater\n");
	else
		printf ("R1 is less\n");
	
	printf ("distance between points are %.2f\n", sqrt ( (double) (r.p1.x * r.p2.x) +  (double)( r.p1.y * r.p2.y )  ));
	printf ("baba yaga of addition %d %d %f \n", (*add).x , (*add).y , (*add).ans);
	return 0;
	
}
