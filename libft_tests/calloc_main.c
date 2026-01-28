#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	void *ft_ptr;
	size_t i;
	int all_zero;

	printf("=== ft_calloc tests ===\n\n");

	printf("Test 1: calloc(5, 4)\n");
	ft_ptr = ft_calloc(5, 4);
	if (!ft_ptr) {
		printf("Allocation failed\n\n");
	} else {
		all_zero = 1;
		for (i = 0; i < 20; i++)
			if (((unsigned char *)ft_ptr)[i] != 0)
				all_zero = 0;
		printf("All zeros: %s\n\n", all_zero ? "✓" : "✗");
		free(ft_ptr);
	}

	printf("Test 2: calloc(0, 10)\n");
	ft_ptr = ft_calloc(0, 10);
	printf("ft_calloc: %s\n\n", ft_ptr ? "allocated (not NULL)" : "NULL");
	if (ft_ptr) free(ft_ptr);

	printf("Test 3: calloc(10, 0)\n");
	ft_ptr = ft_calloc(10, 0);
	printf("ft_calloc: %s\n\n", ft_ptr ? "allocated (not NULL)" : "NULL");
	if (ft_ptr) free(ft_ptr);

	printf("Test 4: calloc(100, 1)\n");
	ft_ptr = ft_calloc(100, 1);
	all_zero = 1;
	if (ft_ptr) {
		for (i = 0; i < 100; i++)
			if (((unsigned char *)ft_ptr)[i] != 0)
				all_zero = 0;
		printf("All 100 bytes are zero: %s\n\n", all_zero ? "✓" : "✗");
		free(ft_ptr);
	}

	return (0);
}
