#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 * main-entry point of the program where the execution begins
 *
 * Return: Always 0 (Success)
 *
 */

int main (void)
{
        int n;
        srand(time(0));
        
        n = rand() - RAND_MAX / 2;
         
        if (n > 0)
        {
                printf("%d it's positive\n", n);
        }
                                                
         else if (n < 0)
         {
                printf("%d it's negative\n", n);
         }
         else 

         {
                 printf("%d it's zero\n", n);
         }

         return (0);
}            
 
