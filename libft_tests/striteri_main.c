#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <string.h>

void to_upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

void replace_with_x(unsigned int i, char *c)
{
	(void)i;
	*c = 'X';
}

int main(void)
{
	char str1[20];

	printf("=== ft_striteri tests ===\n\n");

	printf("Test 1: Convert to uppercase\n");
	strcpy(str1, "hello world");
	printf("Before: \"%s\"\n", str1);
	ft_striteri(str1, to_upper);
	printf("After:  \"%s\"\n", str1);
	printf("Expected: \"HELLO WORLD\" - Match: %s\n\n", 
		(strcmp(str1, "HELLO WORLD") == 0) ? "✓" : "✗");

	printf("Test 2: Replace with 'X'\n");
	strcpy(str1, "test");
	printf("Before: \"%s\"\n", str1);
	ft_striteri(str1, replace_with_x);
	printf("After:  \"%s\"\n", str1);
	printf("Expected: \"XXXX\" - Match: %s\n\n", 
		(strcmp(str1, "XXXX") == 0) ? "✓" : "✗");

	return (0);
}
