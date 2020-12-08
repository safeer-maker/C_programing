#include <stdio.h>

void neg_int();		//Compute the sign of an integer
void two_int_msb(); //Detect if two integers have opposite signs?
void power_of_2();
void set_one_bit();
void bit_rev ();

int main(){
	bit_rev ();

	return 0;
}

void bit_rev (){
	int data, ans = 0 , temp[2]={1,1};
	printf ("Imput data ");
	scanf("%d", &data);
	
	for (int x = 0 ; x < 32 ; x ++){
		temp[1]= data & temp[0];
		temp[0] <<= 1;
		if (temp[1]){
			ans <<=1;
		} 
		else{
			ans <<=1;
			ans ++;
			
		}
	}
	
	printf ("Revirse bits are %o" , ~ans );
}

void set_one_bit(){
	int data, set_bit, temp = 1;
	printf ("Imput data ");
	scanf("%d", &data);
	printf ("Imput set bit ");
	scanf("%d", &set_bit);
	
	
	temp = 1 <<
	 set_bit;
	data = data | temp;
	printf ("data is : %d", data);

}


void power_of_2(){
	
	int flag = 0;
    int data = 0;
    printf("Enter the number ");
    scanf("%d",&data); //Get the number
    flag = ((data != 0) && !(data & (data - 1))); // check the power of 2
    printf ("value chaeck %d\n", (data & (data - 1)) );
    if(flag == 1)
    {
        printf("Number is a power of 2 \n");
    }
    else
    {
        printf("Enter number is not power of 2 \n");
    }
}

void two_int_msb(){
	int num[2] = {0,0};
	int temp[2] = {1,1};
	printf ("Input First number : ");
	scanf ("%d",num);
	printf ("Input Second number : ");
	scanf ("%d",num+1);
	
	temp[0] = temp[0]<<31;
	temp[1] = temp[1];
	
	temp [0] = num[0] & temp[0];
	temp [1] = num[1] & temp[1];
	
	int ans = temp[0] ^ temp [1];
		
	ans? printf("Inputs hace diferent signs\n"): printf("Inputs have same signs\n");
		
}

void neg_int(){		//Compute the sign of an integer
	printf ("Compute the sign of an integer\n\n");
	int num = 0;
	
	printf ("Input and interger: ");
	scanf ("%d", &num);
	int temp = 1;			// the way i figure it out
	temp = temp<<31;
	int ans = num & temp;
	
	if  (ans)
		printf(" input is negative \n");
	else	
		printf ("input is positive \n");	 	
}


