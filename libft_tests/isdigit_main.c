#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	int tests[] = {'0', '5', '9', 'a', 'Z', ' ', '/', ':', -1};
	int i;
	int count = sizeof(tests) / sizeof(tests[0]);

	printf("=== ft_isdigit vs isdigit ===\n\n");
	printf("%-6s %-12s %-12s %s\n", "Char", "ft_isdigit", "isdigit", "Match");
	printf("--------------------------------------\n");

	for (i = 0; i < count; i++)
	{
		int c = tests[i];
		int ft_result = ft_isdigit(c);
		int std_result = isdigit(c);
		
		if (c >= 32 && c < 127)
			printf("'%c'    ", c);
		else
			printf("%-6d ", c);
		
		printf("%-12d %-12d %s\n", 
			ft_result, std_result,
			((ft_result != 0) == (std_result != 0)) ? "✓" : "✗");
	}

	return (0);
}
