#include "main.h"
#include <stdio.h>
/**
  * main - check the code
  *
  * Return: Always 0.
  */
int reset_to_98(int *n);

int main(void)
{
	int n;
	int *p;
	
	n = 402;
	
	printf("n=%d\n", n);
	p = reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
