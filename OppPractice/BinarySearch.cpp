#include "stdio.h"

int arry[24]= {0,1,2,3,4,5,6,7,8,9,11,12,13,15,17,19,22,25,26,28,29,33,35,36};

int BinarySearch(int start, int end, int search){
	
	int mid = (start + end )/ 2;
	
	printf ("\n...................... \n md =%d ", arry[mid]);
	
	if (search == arry[mid]){
		return arry [mid];
	}
	if ( end - start <= 1){
		return -100;
	}
	
	if  (search > arry[mid] ){
		BinarySearch (mid, end , search);
	}else {
		BinarySearch (start, mid, search);
	}
	
}

int main (){
	
	printf ("Found %d", BinarySearch (0,sizeof(arry)/sizeof(int), 37));
	
	return 0;
}
