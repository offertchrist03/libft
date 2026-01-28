#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	int tests[] = {0, 'a', 'Z', '0', ' ', 127, 128, 200, 255, -1};
	int i;
	int count = sizeof(tests) / sizeof(tests[0]);

	printf("=== ft_isascii vs isascii ===\n\n");
	printf("%-6s %-12s %-12s %s\n", "Value", "ft_isascii", "isascii", "Match");
	printf("--------------------------------------\n");

	for (i = 0; i < count; i++)
	{
		int c = tests[i];
		int ft_result = ft_isascii((unsigned char)c);
		int std_result = isascii(c);
		
		printf("%-6d %-12d %-12d %s\n", 
			c, ft_result, std_result,
			((ft_result != 0) == (std_result != 0)) ? "✓" : "✗");
	}

	return (0);
}
