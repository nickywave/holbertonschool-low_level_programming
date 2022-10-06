#include <stdlib.h>
#include <stdio.h>

/**
 *main-entry point of the program where the execution begins
 *
 *Return: Always 0 (Success)
 *
 */

 int main(void)
 {
// Get the character to be written
    char ch = '0';
  
    // Write the Character to stdout
    for (ch = '0'; ch <= '9'; ch++)
        putchar(ch);
    
     return(0);
 }
