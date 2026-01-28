#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char *result;

	printf("=== ft_strtrim tests ===\n\n");

	printf("Test 1: Trim \"   Hello World   \" with \" \"\n");
	result = ft_strtrim("   Hello World   ", " ");
	printf("Result: \"%s\" (expected \"Hello World\")\n", result ? result : "NULL");
	printf("Match: %s\n\n", (result && strcmp(result, "Hello World") == 0) ? "✓" : "✗");
	free(result);

	printf("Test 2: Trim \"xxHello Worldxx\" with \"x\"\n");
	result = ft_strtrim("xxHello Worldxx", "x");
	printf("Result: \"%s\" (expected \"Hello World\")\n", result ? result : "NULL");
	printf("Match: %s\n\n", (result && strcmp(result, "Hello World") == 0) ? "✓" : "✗");
	free(result);

	printf("Test 3: Trim \"xxxxx\" with \"x\"\n");
	result = ft_strtrim("xxxxx", "x");
	printf("Result: \"%s\" (expected empty)\n", result ? result : "NULL");
	printf("Match: %s\n\n", (result && strcmp(result, "") == 0) ? "✓" : "✗");
	free(result);

	return (0);
}
