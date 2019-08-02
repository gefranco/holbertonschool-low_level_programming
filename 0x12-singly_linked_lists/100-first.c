#include<stdio.h>

void init(void) __attribute__ ((constructor));
/**
 * init - executed before main
 *
 */
void init(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
