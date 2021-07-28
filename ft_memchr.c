#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *i;

	if (c > 127)
		c %= 256;
	i = (unsigned char *)s;
	while (n--)
	{
		if (*i == (unsigned char)c)
			return (i);
		i++;	
	}
	return (0);
}
