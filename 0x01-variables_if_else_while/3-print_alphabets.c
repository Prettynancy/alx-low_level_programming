#include <time.h>
#include <stdio.h>
/*
* 3-print_alphabets.c
*
* Description:
* This program prints
* all the lower case characters in
* the alphabet, then the uppercase
*  using putchar()
*
*/

/**
* main - this is the main function that runs everything
* @void: no arguments passed in
*
* Return: 0
*/
int main(void)
{
	char letter;
	int i;

	letter = a;

	for (i = 0; i < 26; i++)
		putchar(letter + i);
	letter = A;
	for (i = 0; i < 26; i++)
		putchar(letter + i);
	putchar(n);
	return (0);
}
