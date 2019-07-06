#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
  srand((unsigned int)time(NULL));
  string name;
  printf("What is your name?");
  scanf("%s",name);
  printf("Hello, %s !\n",name);

  
  int d1 = rand() % 6 + 1;
  int d2 = rand() % 6 + 1;
  printf("Rolling the dice...\n");
  printf("Die 1: %d \n",d1);
  printf("Die 2: %d \n",d2);
  printf("Total value: %d",d1+d2);
 
  return 0;
}
