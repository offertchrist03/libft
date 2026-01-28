#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

int main(void)
{
	char *result;

	printf("=== ft_substr tests ===\n\n");

	printf("Test 1: substr(\"Hello World!\", 0, 5)\n");
	result = ft_substr("Hello World!", 0, 5);
	printf("Result: \"%s\" (expected \"Hello\")\n", result ? result : "NULL");
	printf("Match: %s\n\n", (result && strcmp(result, "Hello") == 0) ? "✓" : "✗");
	free(result);

	printf("Test 2: substr(\"Hello World!\", 6, 5)\n");
	result = ft_substr("Hello World!", 6, 5);
	printf("Result: \"%s\" (expected \"World\")\n", result ? result : "NULL");
	printf("Match: %s\n\n", (result && strcmp(result, "World") == 0) ? "✓" : "✗");
	free(result);

	printf("Test 3: Start beyond string\n");
	result = ft_substr("Hello", 20, 5);
	printf("Result: \"%s\" (expected empty)\n", result ? result : "NULL");
	printf("Match: %s\n\n", (result && strcmp(result, "") == 0) ? "✓" : "✗");
	free(result);

	printf("Test 4: Length exceeds string\n");
	result = ft_substr("Hello World!", 6, 100);
	printf("Result: \"%s\" (expected \"World!\")\n", result ? result : "NULL");
	printf("Match: %s\n\n", (result && strcmp(result, "World!") == 0) ? "✓" : "✗");
	free(result);

	return (0);
}
