#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	char *result;
	int tests[] = {0, 1, -1, 42, -42, 2147483647, -2147483648};
	int i, count = sizeof(tests) / sizeof(tests[0]);

	printf("=== ft_itoa tests ===\n\n");

	for (i = 0; i < count; i++)
	{
		result = ft_itoa(tests[i]);
		printf("itoa(%d) = \"%s\"\n", tests[i], result ? result : "NULL");
		if (result && atoi(result) == tests[i])
			printf("✓ Correct\n\n");
		else
			printf("✗ Incorrect\n\n");
		free(result);
	}

	return (0);
}
