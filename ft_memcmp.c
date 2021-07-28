#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*a;
	char	*b;

	a = (char *) s1;
	b = (char *) s2;
	if (n == 0)
		return (0);
	while (n > 0 && *a != '\0')
	{
		if (*a != *b || *b == '\0')
			return (a - b);
		a++;
		b++;
		n--;
	}
	return (0);
}
