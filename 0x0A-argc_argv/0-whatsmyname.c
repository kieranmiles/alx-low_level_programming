#include "main.h"
/**
 * main -  a program that prints its name
 * @argc: numer of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
