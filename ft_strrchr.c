#include "libft.h"

char	*ft_strrchr(const	char *s, int	c)
{
	int	i;

	i = 0;
	if (c > 127)
		c %= 256;
	while (*s)
	{
		s++;
		i++;
	}	
	while (i > 0)
	{
		if (*s == c)
			return ((char *)s);
		s--;
		i--;
	}	
	if (*s == c)
		return ((char *)s);
	return (0);
}
