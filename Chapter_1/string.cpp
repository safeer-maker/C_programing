/*
*	read char from getchar and convert it to a proper sting and read the length of string
*
*/
#include  <stdio.h>
#define max 1000

int getline (char str[], int len  );
void copy(char from[], char to[] );

int main(){
	
	char max_str [max];
	int max_len = 0;
	char string[max];
	/*
	printf ("Inter the desired string : ");
	while ((str[len] = getchar()) != '\n' ){
		len++;
	}
	str[len] = '\0';
//	printf ("Lengyth and first word od string are : %d  % c \n",len, str[0] );
	printf("string : %s \n", str);
	*/
	for (int x = 0; x < 3 ; x++){
	
		int len = getline(string, max);
		if (len > max_len){
			max_len = len;
			copy(string, max_str);
		}
	}
	
	printf ("in Main length is : %d\n",max_len);
	printf ("in Main length is : %s\n",max_str);
	
	return 0;
}

int getline (char str[], int len ){
	len = 0;
	printf ("Inter the desired string : ");
	while ((str[len] = getchar()) != '\n' && (len < max)){
		len++;
	}
	str[len] = '\0';
//	printf ("Lengyth and first word od string are : %d  % c \n",len, str[0] );
	printf("string : %s \n", str);
	
	return len;
}

void copy(char from[], char to[] ){
	
	//int len = strlen(from);
	//print ("length of incoming string in copy func :%d\n", len );
	int x = 0;
	for (x ;  from[x] != '\0'; x++){
		to[x] = from[x];
	}
	to[x+1] = '\0';
}
