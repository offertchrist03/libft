#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char str[] = "Hello World!";

	printf("=== ft_strrchr vs strrchr ===\n\n");

	printf("Test 1: Find 'o' (last occurrence)\n");
	printf("Match: %s\n\n", (ft_strrchr(str, 'o') == strrchr(str, 'o')) ? "✓" : "✗");

	printf("Test 2: Find '!'\n");
	printf("Match: %s\n\n", (ft_strrchr(str, '!') == strrchr(str, '!')) ? "✓" : "✗");

	printf("Test 3: Find '\\0'\n");
	printf("Match: %s\n\n", (ft_strrchr(str, '\0') == strrchr(str, '\0')) ? "✓" : "✗");

	printf("Test 4: Find 'X' (not found)\n");
	printf("Match: %s\n\n", (ft_strrchr(str, 'X') == strrchr(str, 'X')) ? "✓" : "✗");

	return (0);
}
