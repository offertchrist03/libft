#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char buf1[30], buf2[30];

	printf("=== ft_memmove vs memmove ===\n\n");

	printf("Test 1: Non-overlapping\n");
	strcpy(buf1, "Hello World");
	strcpy(buf2, "Hello World");
	ft_memmove(buf1 + 15, buf1, 11);
	memmove(buf2 + 15, buf2, 11);
	printf("Match: %s\n\n", (memcmp(buf1, buf2, 30) == 0) ? "✓" : "✗");

	printf("Test 2: Overlapping (dest after src)\n");
	strcpy(buf1, "Hello World");
	strcpy(buf2, "Hello World");
	ft_memmove(buf1 + 3, buf1, 8);
	memmove(buf2 + 3, buf2, 8);
	printf("Match: %s\n\n", (memcmp(buf1, buf2, 30) == 0) ? "✓" : "✗");

	printf("Test 3: Overlapping (dest before src)\n");
	strcpy(buf1, "Hello World");
	strcpy(buf2, "Hello World");
	ft_memmove(buf1, buf1 + 6, 5);
	memmove(buf2, buf2 + 6, 5);
	printf("Match: %s\n\n", (memcmp(buf1, buf2, 30) == 0) ? "✓" : "✗");

	return (0);
}
