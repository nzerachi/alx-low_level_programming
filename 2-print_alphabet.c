#include <stdio.h>
#include <unistd.h>
/*
 * main - Entry
 * Description: prints the alphabet in lowercase followed by a new line
 * Return: Always 0 (success)
 * */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
