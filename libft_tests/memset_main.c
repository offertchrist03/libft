#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char buf1[20], buf2[20];

	printf("=== ft_memset vs memset ===\n\n");

	printf("Test 1: Set to 'A'\n");
	ft_memset(buf1, 'A', 10);
	memset(buf2, 'A', 10);
	printf("Match: %s\n\n", (memcmp(buf1, buf2, 10) == 0) ? "✓" : "✗");

	printf("Test 2: Set to 0\n");
	ft_memset(buf1, 0, 15);
	memset(buf2, 0, 15);
	printf("Match: %s\n\n", (memcmp(buf1, buf2, 15) == 0) ? "✓" : "✗");

	printf("Test 3: Set to 255\n");
	ft_memset(buf1, 255, 8);
	memset(buf2, 255, 8);
	printf("Match: %s\n\n", (memcmp(buf1, buf2, 8) == 0) ? "✓" : "✗");

	return (0);
}
