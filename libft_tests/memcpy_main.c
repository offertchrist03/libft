#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char src[] = "Hello World!";
	char dest1[20], dest2[20];

	printf("=== ft_memcpy vs memcpy ===\n\n");

	printf("Test 1: Copy string\n");
	memset(dest1, 'X', 20);
	memset(dest2, 'X', 20);
	ft_memcpy(dest1, src, strlen(src) + 1);
	memcpy(dest2, src, strlen(src) + 1);
	printf("Match: %s\n\n", (strcmp(dest1, dest2) == 0) ? "✓" : "✗");

	printf("Test 2: Copy 5 bytes\n");
	memset(dest1, 'Y', 20);
	memset(dest2, 'Y', 20);
	ft_memcpy(dest1, src, 5);
	memcpy(dest2, src, 5);
	printf("Match: %s\n\n", (memcmp(dest1, dest2, 20) == 0) ? "✓" : "✗");

	return (0);
}
