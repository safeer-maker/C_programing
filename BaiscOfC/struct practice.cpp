/*
Practice for struct 
employer data base form
as user to enter data of employ
can provide the data of the employer by it ID 


*/

# include <stdio.h>

# define max 50

struct user {
	char * name;
	int ager;
	int pay;
};

void input (struct user * inp){
	
	printf ("Enter name of Employer : ");
	int x = 0 ;
	while ((*inp).name[x] = getchar() != '\n')
		x++;
	(*inp).name[x] = '\0';
	
}

void print (struct user * out){
	printf ("Empolyer name is %s" ,(*out).name);
	
}

int main (){
	struct user employers[10];
	
	input (employers);
	
//	print (employers);
	
	
	return 0;	
}

