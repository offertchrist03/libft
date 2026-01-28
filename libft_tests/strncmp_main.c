#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	printf("=== ft_strncmp vs strncmp ===\n\n");

	printf("Test 1: Identical strings\n");
	int r1 = ft_strncmp("Hello", "Hello", 5);
	int r2 = strncmp("Hello", "Hello", 5);
	printf("Match: %s\n\n", ((r1 == 0 && r2 == 0)) ? "✓" : "✗");

	printf("Test 2: Different strings\n");
	r1 = ft_strncmp("Hello", "World", 5);
	r2 = strncmp("Hello", "World", 5);
	printf("Match: %s\n\n", ((r1 < 0 && r2 < 0) || (r1 > 0 && r2 > 0)) ? "✓" : "✗");

	printf("Test 3: First 3 chars\n");
	r1 = ft_strncmp("Hello", "Hell", 4);
	r2 = strncmp("Hello", "Hell", 4);
	printf("Match: %s\n\n", ((r1 > 0 && r2 > 0)) ? "✓" : "✗");

	return (0);
}
