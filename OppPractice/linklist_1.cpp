#include "stdio.h"
#include "stdlib.h"
struct data {
	int value;
	struct data * next;
}start;
//int counter = 0;


void create(int data){
	struct data * temp = &start;
	printf ("\n\n--------------------\n");
	while (temp->next != NULL){
		printf ("IN while loop of creation\n");
		printf ("\n IN while loop for data entry\n");
		temp = temp->next;
	}
	printf ("Data entered is %d", temp->data)
	temp->next = (struct data *)malloc (sizeof (struct data) );
	temp->next->value = data;

}

void print (){
	printf ("\nData in linklist is \n");
	struct data * temp = &start;
	while (temp->next != NULL){
		printf (" %d", temp->value);
		temp = temp->next;
	}
}

void delet (){
	printf ("\nIN delete function of linklist \n");
	struct data * temp = &start;
	while (temp->next != NULL){
		printf ("deleting ");
		struct data * del = temp;
		temp = temp->next;
		free (del);
	}
}

int main (){
	
	create (9);
//	print ();
	
	delet();
	return 0;
}
