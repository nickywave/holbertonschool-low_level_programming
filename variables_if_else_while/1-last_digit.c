#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 *main-entry point of the program where the execution begins
 *
 *Return: Always 0 (Success)
 *
 */


int main(void)
{
  int n;
  int a;

  srand(time(0));
  
  n = rand() - RAND_MAX /2;
  a = n % 10;
  if (n>5)
  {  
          printf("Last digit of %d and is greater than 5/n", n);
  }
  
  else if ((n<6)&&n!=0)
  {
          printf("Last digit of %d and is less than 6 and not 0/n", n);
  }      
   
  else 
  {
          printf("Last digit of %d and is 0/n", n);
  }       

  
  return (0);
}
