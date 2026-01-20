#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(int argc, char **argv)
{
	if (argc < 4)
		return (1);
	printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
