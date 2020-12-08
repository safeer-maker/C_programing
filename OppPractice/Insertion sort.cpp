// Insertion sort practice

#include <stdio.h>

int main (){
	int len = 10;
	int array[len]  = {10,6,2,7,9,4,5,1,3,8}; 
	int i = 0;
	for (i ; i < len-1 ; i++){
		int PickedValue = array[i];
		int index = i;
		printf ("/");
		while (index > 0 || (PickedValue <= array[index-1])){
			array[index ] = array [index-1];
//			array [ index -1 ] = PickedValue;
			index--;			
			printf (".");
		}
		array [ index ] = PickedValue;
			
	}
	
	for (i = 0 ; i < len ; i++)
	 	printf ("  %i", array[i]);
	
	return 0;
}

/*/

#include<iostream>  
using namespace std;  
int main ()  
{    
    int myarray[10] = { 12,4,3,1,15,45,33,21,10,2};   
       
    cout<<"\nInput list is \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }    
    for(int k=1; k<10; k++)   
    {  
        int temp = myarray[k];  
        int j= k-1;  
        while(j>=0 && temp <= myarray[j])  
        {  
            myarray[j+1] = myarray[j];   
            j = j-1;  
        }  
        myarray[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }  
}

*/

