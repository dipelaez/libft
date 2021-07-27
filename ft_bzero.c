#include	"libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*a;

	a = (char *) s;
	while (n--)
	{
		*a++ = 0;
	}
}
