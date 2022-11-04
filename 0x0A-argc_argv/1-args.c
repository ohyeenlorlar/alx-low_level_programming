#include "main.h"
#include <stdio.h>

/**
*main- prints the number of arguments
*@argc: number of command line arguments
*@argv: array name
*Return: 0
*/
int main(int argc, char *argv[])
{
	(void) argv;/*ignore argv*/
	printf("%i\n", argc - 1);
	return (0);
}
