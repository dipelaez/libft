#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	little_size;
	unsigned int	i;

	i = 0;
	little_size = ft_strlen((char *)little);
	if (*little == 0)
		return ((char *)big);
	while (*big && (i < len))
	{
		if ((ft_strncmp(big,little,little_size) == 0) 
				&& (i + little_size <= len))
			return ((char *)big);
		big++;
		i++;	
	}
	return (0);
}
