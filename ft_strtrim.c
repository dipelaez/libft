#include "libft.h"
#include <stdio.h>

static int	ft_findstart(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;
	int	resp;

	i = 0;
	j = 0;
	count = 0;
	resp = 0;
	while (s1[j])
	{
		while (set[i])
		{
			if (set[i] == s1[j])
			{
				count++;
				resp++;
			}	
			i++;
		}
		if (resp == 0)
			return (count);
		j++;
		i = 0;
		resp = 0;
	}
	return (count);
}

static int	ft_findend(char const *s1, char const *set, int	s1_len)
{
	int	i;
	int	j;
	int	count;
	int	resp;

	i = 0;
	j = s1_len - 1;
	count = 0;
	resp = 0;
	while (s1[j])
	{
		while (set[i])
		{
			if (set[i] == s1[j])
			{
				count++;
				resp++;
			}	
			i++;
		}
		if (resp == 0)
			return (count);
		j--;
		i = 0;
		resp = 0;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int begin;
	int	end;
	int	s1_len;
	char	*str;
	size_t	len;

	if (!set || !s1)
		return (NULL);
	s1_len = ft_strlen(s1);
	begin = ft_findstart(s1,set);
	end = ft_findend(s1,set,s1_len);
	len = s1_len - begin - end;
	str = ft_substr(s1 + begin, 0, len);
	
	// printf("valor de len: %zu\n", len);
	// printf("teste begin: %d\n", begin);
	// printf("teste end: %d\n", end);
	return (str);	
}
