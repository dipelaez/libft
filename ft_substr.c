#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t lens;
	char	*str;
	unsigned int i;
	unsigned int j;
	
	if (s == 0)
		return (0);
	lens = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	if ((size_t)start > len)
		return (0);
	i = start;
	i = 0;
	if (start < lens)
	{
		while (i < start + len && s[i] != '\0')
		{
			str[j] = s[i];
			j++;
			i++;
		}
	}
	str[j] = '\0';
	return (str);
}
