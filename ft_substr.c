#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t		len_s;
	char		*sub_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start < len)
		len = len_s - start;
	sub_s = (char *) malloc(len + 1);
	if (!sub_s)
		return (NULL);
	i = 0;
	while (i < len && s[start] + i)
	{
		sub_s[i] = s[start + i];
		i++;
	}
	sub_s[len] = '\0';
	return (sub_s);	
}
