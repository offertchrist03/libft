#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	char *tests[] = {
		"123",
		"-456",
		"  789",
		"+42",
		"  -42",
		"0",
		"2147483647",
		"-2147483648",
		"123abc",
		"  +0",
		"  -0",
		NULL
	};
	int i = 0;

	printf("=== ft_atoi vs atoi ===\n\n");
	while (tests[i])
	{
		int ft_result = ft_atoi(tests[i]);
		int std_result = atoi(tests[i]);
		printf("String: \"%s\"\n", tests[i]);
		printf("ft_atoi:  %d\n", ft_result);
		printf("atoi:     %d\n", std_result);
		printf("Match: %s\n\n", (ft_result == std_result) ? "✓" : "✗");
		i++;
	}
	return (0);
}
