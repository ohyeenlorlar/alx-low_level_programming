#include "main.h"
#include <stdio.h>

/**
*main - prints the number of arguments passed into the main
*@argc: number of command line arguments
*@argv: array name
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		ptintf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++);

		printf("%d\n", i - 1);
	}
	return (0);
}
