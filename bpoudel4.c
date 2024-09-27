#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

	int x;
	printf("Enter an Integer: ");
	scanf("%d", &x);

	if (x>1){
		printf("Integer variable is greater than 1\n");
	}
	else{
		printf("Integer variable is not greater than 1\n");
	}

	// Float
	float y;
	printf("Enter a float : ");
	scanf("%f", &y);
	
	if (y>2.5){
		printf("The float variable is greater than 2.5\n");
	}else{
		printf("The float variable is less than or equal to 2.5\n");
	}

	// String
	char s[100]; // the variable holds string of length 100
	printf("Enter a string:");
	scanf("%s", s);
	
	if (strcmp(s,"Hello World") == 0){
		printf("String entered is equal to 'Hello World'\n");
	}else{
		printf("The string is not equal to Hello World\n");
	}

	//Boolean
	bool b;
    	int i;
    	int result; // To check the return value of scanf

    	printf("Enter 1 for True and 0 for False: ");
    	result = scanf("%d", &i); 

    	if (result != 1) { // Check if scanf successfully read an integer
        	printf("Invalid input. Please enter 0 or 1\n");
    	} else if (i == 0) {
        	b = false;
    	} else if (i == 1) {
        	b = true;
    	} else {
        	printf("Invalid input. Please enter 0 or 1\n");
    	}

   	if (b) {
        	printf("You entered true\n");
    	} else {
        	printf("You entered false\n");
    	}
}
