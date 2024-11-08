#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function is main
 * @argc: arguments contents
 * @argv: arguments vectors
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
