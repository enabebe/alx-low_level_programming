#include "main.h" 
/**
 *print_number - prints an integer.
 *only using the putchar function.
 *noarrays and pointers.
 *@n: integer to be printed.
 *
 *Return: void.
 */
void print_number(int n)
{
   	 // If number is smaller than 0, put a - sign 
    	// and change number to positive 
	if (n < 0) 
	{ 
        	putchar('-'); 
        	n = -n; 
	} 
  
    // Remove the last digit and recur 
    	if (n/10) 
        	print_number(n/10); 
  
    // Print the last digit 
    	putchar(n%10 + '0'); 
}
