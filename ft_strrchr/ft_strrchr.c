#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = 0;
	while (s[s_len])
		s_len++;
	while (s_len > 0)
	{
		s_len--;
		if ((int)s[s_len] == c)
			return ((char *)&s[s_len]);
	}
	return (NULL);
}
