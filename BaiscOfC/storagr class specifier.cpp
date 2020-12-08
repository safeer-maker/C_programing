#include<stdio.h>
void increment(void);
int main()
{
   increment();
   increment();
   increment();
   increment();
   return 0;
}

void increment(void)
{
   static int i ;
   printf ( "%d ", i ) ;
   i++;
}

