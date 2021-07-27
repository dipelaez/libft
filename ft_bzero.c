#include	"libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n - 1 > 0 )
	{
		s = '\0';
		n++;
		s++;
	}
}