#include <stdio.h>
#include <stdlib.h>

int length(char string[]){
	int index;
	for (index = 0; string[index] !='\0'; ++index);
	return(index);
}
int main(){
	char line[100];
	while(1);
	printf("¡Ten cuidado!, se cuenta los espacios\n");
	printf("Ingresa una frase: ");
	fgets(line, sizeof(line), stdin);
	printf("length (including newline) is: %d \n", length(line));


}
