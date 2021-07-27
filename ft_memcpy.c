#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t n)
{
	char	*a;
	char	*b;
	int	i;	

	i = 0;
	a = (char *) dest;
	b = (char *) src;
	while (n--)
	{
		*a++ = b[i];
		i++;
	}
	return (a);
}