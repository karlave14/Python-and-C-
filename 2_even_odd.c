// Write a program to check whether a number is even or odd. 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  int num = atoi(argv[1]);
  if(num % 2 == 0){
    printf("the number %d is even\n", num);
  }else{
    printf("the number %d is odd \n", num);
  }

}
