#include <stdio.h>

/**
 * before_main - Prints a message beofre the main function is executed
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * call_before_main - Calls the before function before main
 */

__attribute__((constructor))
void call_before_main(void)
{
before_main();
}
