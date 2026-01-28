#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void free_split(char **arr)
{
	int i = 0;
	if (!arr) return;
	while (arr[i]) free(arr[i++]);
	free(arr);
}

int main(void)
{
	char **result;
	int i;

	printf("=== ft_split tests ===\n\n");

	printf("Test 1: Split \"Hello World Test\" by ' '\n");
	result = ft_split("Hello World Test", ' ');
	if (result) {
		i = 0;
		while (result[i]) {
			printf("  [%d]: \"%s\"\n", i, result[i]);
			i++;
		}
		printf("Expected 3 words: %s\n\n", (i == 3) ? "✓" : "✗");
		free_split(result);
	}

	printf("Test 2: Split \"one,two,three\" by ','\n");
	result = ft_split("one,two,three", ',');
	if (result) {
		i = 0;
		while (result[i]) {
			printf("  [%d]: \"%s\"\n", i, result[i]);
			i++;
		}
		printf("Expected 3 words: %s\n\n", (i == 3) ? "✓" : "✗");
		free_split(result);
	}

	printf("Test 3: Split \"  Hello   World  \" by ' '\n");
	result = ft_split("  Hello   World  ", ' ');
	if (result) {
		i = 0;
		while (result[i]) {
			printf("  [%d]: \"%s\"\n", i, result[i]);
			i++;
		}
		printf("Expected 2 words: %s\n\n", (i == 2) ? "✓" : "✗");
		free_split(result);
	}

	return (0);
}
