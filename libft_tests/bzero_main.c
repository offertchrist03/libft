#include <stdio.h>
#include <string.h>
#include "libft.h"

void print_buffer(char *buf, size_t size, const char *label)
{
	size_t i;
	printf("%s: ", label);
	for (i = 0; i < size; i++)
		printf("%02x ", (unsigned char)buf[i]);
	printf("\n");
}

int main(void)
{
	char buf1[20];
	char buf2[20];

	printf("=== ft_bzero vs bzero ===\n\n");

	printf("Test 1: Zero 10 bytes\n");
	memset(buf1, 'A', 20);
	memset(buf2, 'A', 20);
	ft_bzero(buf1, 10);
	bzero(buf2, 10);
	print_buffer(buf1, 20, "ft_bzero");
	print_buffer(buf2, 20, "bzero   ");
	printf("Match: %s\n\n", (memcmp(buf1, buf2, 20) == 0) ? "✓" : "✗");

	printf("Test 2: Zero 0 bytes\n");
	memset(buf1, 'B', 20);
	memset(buf2, 'B', 20);
	ft_bzero(buf1, 0);
	bzero(buf2, 0);
	print_buffer(buf1, 20, "ft_bzero");
	print_buffer(buf2, 20, "bzero   ");
	printf("Match: %s\n\n", (memcmp(buf1, buf2, 20) == 0) ? "✓" : "✗");

	printf("Test 3: Zero entire buffer (20 bytes)\n");
	memset(buf1, 'C', 20);
	memset(buf2, 'C', 20);
	ft_bzero(buf1, 20);
	bzero(buf2, 20);
	print_buffer(buf1, 20, "ft_bzero");
	print_buffer(buf2, 20, "bzero   ");
	printf("Match: %s\n\n", (memcmp(buf1, buf2, 20) == 0) ? "✓" : "✗");

	return (0);
}
