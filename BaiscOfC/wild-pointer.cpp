#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Now pointer pointing valid memory
    int x = 12;
	int *ptr = NULL ;//malloc(sizeof(int)); /* no more wild pointer */
    //if(ptr == NULL)
    {
//        return -1;
    }
    //Assigning value
    //*(int*)ptr = 12;
    printf("%p ", ptr +2);
    free(ptr); //free allocated memory
    return 0;
}


