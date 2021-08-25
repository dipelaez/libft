#include "libft.h"
#include <stdio.h>

static int count_strings(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	len;

	len = ft_strlen(s);
	if (s[len - 1] == c)
		len--;
	i = 0;
	if (s[i] == c)
		i++;
	count = 0;
	while (i < len)
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}


char	**ft_split(char const *s, char c)
{
	size_t	str_nbr;
	size_t	count;
	char	**array;

	str_nbr = count_strings(s, c);
	array = (char **) malloc((str_nbr + 1) * sizeof(char));
	count = 0;
	while (count < str_nbr)
	{
		array[count] = get_array(); //fazer função para pegar array
		count++;
	}
	array[count] = 0;
	return (array);
}
