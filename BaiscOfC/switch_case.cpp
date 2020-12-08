#include <iostream>



int main (){
	int data = 0; 
	printf ("Please enter the desired day: ");
	scanf ("%d", & data);	
	
	switch (data){
		case 1:{
			printf ("This day" \
			 " in Moday");
			break;
		}
		case 2:{
			printf ("This day in Tuesday");
			break;
		}
	}
	
	return 0;
}
