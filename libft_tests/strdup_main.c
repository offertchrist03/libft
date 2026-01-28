#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	printf("=== ft_strdup tests ===\n\n");

	printf("Test 1: Duplicate \"Hello World!\"\n");
	char *dup = ft_strdup("Hello World!");
	printf("Result: \"%s\"\n", dup ? dup : "NULL");
	printf("Match: %s\n\n", (dup && strcmp(dup, "Hello World!") == 0) ? "✓" : "✗");
	free(dup);

	printf("Test 2: Duplicate empty string\n");
	dup = ft_strdup("");
	printf("Result: \"%s\"\n", dup ? dup : "NULL");
	printf("Match: %s\n\n", (dup && strcmp(dup, "") == 0) ? "✓" : "✗");
	free(dup);

	return (0);
}
