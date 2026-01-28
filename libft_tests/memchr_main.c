#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char str[] = "Hello World!";
	void *ft_result, *std_result;

	printf("=== ft_memchr vs memchr ===\n\n");

	printf("Test 1: Find 'W' in \"%s\"\n", str);
	ft_result = ft_memchr(str, 'W', strlen(str));
	std_result = memchr(str, 'W', strlen(str));
	printf("Match: %s\n\n", (ft_result == std_result) ? "✓" : "✗");

	printf("Test 2: Find 'X' (not in string)\n");
	ft_result = ft_memchr(str, 'X', strlen(str));
	std_result = memchr(str, 'X', strlen(str));
	printf("Match: %s\n\n", (ft_result == std_result) ? "✓" : "✗");

	return (0);
}
