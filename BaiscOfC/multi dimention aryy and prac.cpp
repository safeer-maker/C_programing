#include<stdio.h>
void increment(void);


int main()
{
	int arry [2][2];
	int *ptr = arry[0];
	
	int i =0;
	for (int x = 0; x < 2; x++)
		for (int y = 0; y < 2; y++)
		{
			arry[x][y] = ++i;
		}
	
	printf (" %d %d %d %d ", *ptr, *(ptr+1), *(ptr+2), *(ptr+3));
	
	
	
   return 0;
}


