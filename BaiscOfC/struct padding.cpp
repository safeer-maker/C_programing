# include <stdio.h>

#pragma pack (1)
struct  test{
	char d;
	int a:12 ;
	char b ;
	char c ;
};

int main (){
	
	
	struct test s;
	char * a = "hello";
	printf ("Size of structure is : %s", a);
	
	return 0;
}


