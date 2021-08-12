#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t n)
{
	char		*a;
	const char	*b;

	a = dest;
	b = src;
	while (n--)
	{
		*a++ = *b++;
	}
	return (dest);
}
