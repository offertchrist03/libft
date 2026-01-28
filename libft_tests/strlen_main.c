#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	printf("=== ft_strlen vs strlen ===\n\n");

	printf("Test 1: \"Hello World!\"\n");
	printf("Match: %s\n\n", (ft_strlen("Hello World!") == strlen("Hello World!")) ? "✓" : "✗");

	printf("Test 2: Empty string\n");
	printf("Match: %s\n\n", (ft_strlen("") == strlen("")) ? "✓" : "✗");

	printf("Test 3: Single char\n");
	printf("Match: %s\n\n", (ft_strlen("A") == strlen("A")) ? "✓" : "✗");

	return (0);
}
