#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char str[] = "Hello World!";

	printf("=== ft_strchr vs strchr ===\n\n");

	printf("Test 1: Find 'W'\n");
	printf("Match: %s\n\n", (ft_strchr(str, 'W') == strchr(str, 'W')) ? "✓" : "✗");

	printf("Test 2: Find 'H'\n");
	printf("Match: %s\n\n", (ft_strchr(str, 'H') == strchr(str, 'H')) ? "✓" : "✗");

	printf("Test 3: Find '\\0'\n");
	printf("Match: %s\n\n", (ft_strchr(str, '\0') == strchr(str, '\0')) ? "✓" : "✗");

	printf("Test 4: Find 'X' (not in string)\n");
	printf("Match: %s\n\n", (ft_strchr(str, 'X') == strchr(str, 'X')) ? "✓" : "✗");

	return (0);
}
