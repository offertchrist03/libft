#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

char to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char shift_by_index(unsigned int i, char c)
{
	return (c + i);
}

int main(void)
{
	char *result;

	printf("=== ft_strmapi tests ===\n\n");

	printf("Test 1: Convert \"hello\" to uppercase\n");
	result = ft_strmapi("hello", to_upper);
	printf("Result: \"%s\" (expected \"HELLO\")\n", result ? result : "NULL");
	printf("Match: %s\n\n", (result && strcmp(result, "HELLO") == 0) ? "✓" : "✗");
	free(result);

	printf("Test 2: Shift \"hello\" by index\n");
	result = ft_strmapi("hello", shift_by_index);
	printf("Result: \"%s\" (h+0, e+1, l+2, l+3, o+4)\n", result ? result : "NULL");
	printf("Match: %s\n\n", (result != NULL) ? "✓" : "✗");
	free(result);

	printf("Test 3: Empty string\n");
	result = ft_strmapi("", to_upper);
	printf("Result: \"%s\" (expected empty)\n", result ? result : "NULL");
	printf("Match: %s\n\n", (result && strcmp(result, "") == 0) ? "✓" : "✗");
	free(result);

	return (0);
}
