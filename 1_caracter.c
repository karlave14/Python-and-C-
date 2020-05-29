/*
Write  aprogram to input as an argument in the command line  any character and check whether it is alphabet,
digit or special chararcter.
You have to input excatly one character as an argument in the command line, besides the name of the program itself
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	if(argc!=2){
                printf("You should input excatly one character as an argument besides the name of the program\n");
                return 0;}
	int lenght=strlen(argv[1]);

	if(lenght>1){
		printf("Make sure your argument is only one character, either a digit, a letter or another one\n");
		return 0;
	}

	if((argv[1][0]>=97 && argv[1][0]<=122) || (argv[1][0]>=65 && argv[1][0]<=90))
		printf("Your input is a letter\n");
	else if(argv[1][0]>=48 && argv[1][0]<=57)
		printf("Your input is a number\n");
	else
		printf("Your input is an special character\n");
	return 0;}

