#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[20], dst2[20];
	size_t	r1;
	size_t	r2;

	printf("=== ft_strlcpy vs strlcpy ===\n\n");
	printf("Test 1: Normal copy\n");
	memset(dst1, 'X', 20);
	memset(dst2, 'X', 20);
	r1 = ft_strlcpy(dst1, "Hello World", 20);
	r2 = strlcpy(dst2, "Hello World", 20);
	printf("Match: %s\n\n", (strcmp(dst1, dst2) == 0 && r1 == r2) ? "✓" : "✗");
	printf("Test 2: Size = 6\n");
	memset(dst1, 'X', 20);
	memset(dst2, 'X', 20);
	r1 = ft_strlcpy(dst1, "Hello World", 6);
	r2 = strlcpy(dst2, "Hello World", 6);
	printf("Match: %s\n\n", (strcmp(dst1, dst2) == 0 && r1 == r2) ? "✓" : "✗");
	return (0);
}
