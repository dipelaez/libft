#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*a;
	char	*b;

	a = (char *) s1;
	b = (char *) s2;
	while (n--)
	{
		if (*a != *b)
			return (a - b);
		a++;
		b++;
	}
	return (0);
}
