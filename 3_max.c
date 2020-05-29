// Write a program to find maximum between three numbers. 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);
  int num3 = atoi(argv[3]);

  if(num1 >= num2 && num1 >= num3){
    printf("the number %d is maximun\n", num1);
  }else if (num2 >= num3){
    printf("the number %d is maximun\n", num2);
  }else{
    printf("the num %d is maximun\n", num3);
  }

}

