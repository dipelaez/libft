#include	"libft.h"

char	*ft_strdup(const char	*s)
{
	char	*p;
	int		len;

	len = ft_strlen(s) + 1;
	p = (char *) malloc(len);
	if (p)
		ft_strlcpy(p, s, len);
	return (p);
}
