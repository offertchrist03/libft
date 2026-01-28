#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	printf("=== ft_memcmp vs memcmp ===\n\n");

	printf("Test 1: Compare \"Hello\" and \"Hello\"\n");
	int r1 = ft_memcmp("Hello", "Hello", 5);
	int r2 = memcmp("Hello", "Hello", 5);
	printf("Match: %s\n\n", ((r1 == 0 && r2 == 0)) ? "✓" : "✗");

	printf("Test 2: Compare \"Hello\" and \"World\"\n");
	r1 = ft_memcmp("Hello", "World", 5);
	r2 = memcmp("Hello", "World", 5);
	printf("Match: %s\n\n", ((r1 < 0 && r2 < 0) || (r1 > 0 && r2 > 0)) ? "✓" : "✗");

	return (0);
}
