nclude "main.h"
/**
  * print_alphabet - Print alphabet in lowercase with putchar
  *
  * Return: 0 (successful)
  */
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
