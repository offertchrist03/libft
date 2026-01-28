#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char *result;
	
	printf("=== ft_strnstr tests ===\n\n");

	printf("Test 1: Find \"World\" in \"Hello World\"\n");
	result = ft_strnstr("Hello World", "World", 11);
	printf("Result: %s\n", result ? result : "NULL");
	printf("Expected: \"World\" - Match: %s\n\n", 
		(result && strcmp(result, "World") == 0) ? "✓" : "✗");

	printf("Test 2: Needle not found\n");
	result = ft_strnstr("Hello World", "xyz", 11);
	printf("Result: %s\n", result ? result : "NULL");
	printf("Expected: NULL - Match: %s\n\n", (result == NULL) ? "✓" : "✗");

	printf("Test 3: Empty needle\n");
	result = ft_strnstr("Hello World", "", 11);
	printf("Result: %s\n", result ? result : "NULL");
	printf("Expected: \"Hello World\" - Match: %s\n\n", 
		(result && strcmp(result, "Hello World") == 0) ? "✓" : "✗");

	printf("Test 4: Length too small\n");
	result = ft_strnstr("Hello World", "World", 8);
	printf("Result: %s\n", result ? result : "NULL");
	printf("Expected: NULL - Match: %s\n\n", (result == NULL) ? "✓" : "✗");

	return (0);
}
