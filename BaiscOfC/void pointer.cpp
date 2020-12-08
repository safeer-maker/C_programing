#include <stdio.h>
int main(int argc, char *argv[])
{
    /*void *pvData = NULL; //void pointer
    int *iData  = NULL;// integer pointer
    char *cData = NULL;//character pointer
    float *fData = NULL;//float pointer
    //size of void pointer
    printf("size of void pointer = %d\n\n",sizeof(pvData));
    //size of void pointer
    printf("size of integer pointer = %d\n\n",sizeof(iData));
    //size of void pointer
    printf("size of character pointer = %d\n\n",sizeof(cData));
    //size of void pointer
    printf("size of float pointer = %d\n\n",sizeof(fData));
    */
    void *vptr = NULL
	;
    int sam = 23323005;
    vptr = &sam;
    printf ("Void pointer value %x", *((double*)vptr));    
    printf ("Void pointer value %c", *((char*)vptr));
    
    
    return 0;
}
