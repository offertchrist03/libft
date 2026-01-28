#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[20], dst2[20];
	size_t	r1;
	size_t	r2;

	printf("=== ft_strlcat vs strlcat ===\n\n");
	printf("Test 1: Normal concatenation\n");
	strcpy(dst1, "Hello");
	strcpy(dst2, "Hello");
	r1 = ft_strlcat(dst1, " World", 20);
	r2 = strlcat(dst2, " World", 20);
	printf("Match: %s\n\n", (strcmp(dst1, dst2) == 0 && r1 == r2) ? "✓" : "✗");
	printf("Test 2: With size limit\n");
	strcpy(dst1, "Hi");
	strcpy(dst2, "Hi");
	r1 = ft_strlcat(dst1, " there", 10);
	r2 = strlcat(dst2, " there", 10);
	printf("Match: %s\n\n", (strcmp(dst1, dst2) == 0 && r1 == r2) ? "✓" : "✗");
	return (0);
}
