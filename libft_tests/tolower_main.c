#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	int tests[] = {'A', 'Z', 'a', 'z', '0', '9', ' '};
	int i, count = sizeof(tests) / sizeof(tests[0]);

	printf("=== ft_tolower vs tolower ===\n\n");
	printf("%-6s %-12s %-12s %s\n", "Char", "ft_tolower", "tolower", "Match");
	printf("--------------------------------------\n");

	for (i = 0; i < count; i++)
	{
		int c = tests[i];
		int ft_result = ft_tolower(c);
		int std_result = tolower(c);
		printf("'%c'    ", c);
		if (ft_result >= 32 && ft_result < 127)
			printf("'%c'          ", ft_result);
		else
			printf("%-12d ", ft_result);
		if (std_result >= 32 && std_result < 127)
			printf("'%c'         ", std_result);
		else
			printf("%-12d ", std_result);
		printf("%s\n", (ft_result == std_result) ? "✓" : "✗");
	}

	return (0);
}
