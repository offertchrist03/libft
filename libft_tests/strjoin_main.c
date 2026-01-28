#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char *result;

	printf("=== ft_strjoin tests ===\n\n");

	printf("Test 1: Join \"Hello\" + \" World\"\n");
	result = ft_strjoin("Hello", " World");
	printf("Result: \"%s\" (expected \"Hello World\")\n", result ? result : "NULL");
	printf("Match: %s\n\n", (result && strcmp(result, "Hello World") == 0) ? "✓" : "✗");
	free(result);

	printf("Test 2: Join \"\" + \"World\"\n");
	result = ft_strjoin("", "World");
	printf("Result: \"%s\" (expected \"World\")\n", result ? result : "NULL");
	printf("Match: %s\n\n", (result && strcmp(result, "World") == 0) ? "✓" : "✗");
	free(result);

	printf("Test 3: Join \"Hello\" + \"\"\n");
	result = ft_strjoin("Hello", "");
	printf("Result: \"%s\" (expected \"Hello\")\n", result ? result : "NULL");
	printf("Match: %s\n\n", (result && strcmp(result, "Hello") == 0) ? "✓" : "✗");
	free(result);

	return (0);
}
