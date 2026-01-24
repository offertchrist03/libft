
#include <stdlib.h>

void	ft_putendl_fd(char *s, int fd);

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (1);
	ft_putendl_fd(argv[1], atoi(argv[2]));
	return (0);
}
