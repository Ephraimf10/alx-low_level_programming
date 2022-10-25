#include <stdio.h>
 int main()
{
	int i;
	for(i = 0; i < 2; i++)
	{
		int j;
		for (j = 0; j < 10; j++)
		{
			printf("%d%d\n", i, j);
		}
	}
	return (0);
}
