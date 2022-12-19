#include "main.h"

/**
 * swap_int -function that swaps the values of the two integers.
 * @a: this is the first entry
 * @b: this is the second entry
 *
 *
 */
void swap_int(int *a, int *b)
{
         int changed;

	 changed = *a;
	 *a = *b;
         *b = changed;		 

}	
