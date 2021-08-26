#include "libft.h"
#include <stdio.h>

static int count_strings(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	len;

	len = ft_strlen(s);
	while (s[len - 1] == c)
		len--;
	i = 0;
	while (s[i] == c)
		i++;
	count = 0;
	while (s[i])
	{
		while (i < len)
		{
			if (s[i] == c && s[i - 1] != c)
				count++;
			i++;
		}
		return (count + 1);
	}
	return (count);
}

static void *get_str(char const *s, char c, int *i)
{
	char	*str;
	int		j;
	int		trim;
	int		h;
		
	j = *i;
	h = *i;
	trim = 0;
	while (s[j + trim] != '\0' && s[j + trim] == c)
		trim++;
	while (s[j + trim] != '\0' && s[j + trim] != c)
		j++;
	if (!(str = (char *) malloc((j - h + 1) * sizeof(char))))
		return (0);
	*i = j + trim;
	ft_strlcpy(str, s + trim + h, j - h + 1);
	// printf("Valor de J = %d\n Valor de I = %d\n", j, *i);
	// printf("Valor de trim = %d\n", trim);
	// printf("Valor de h = %d\n", h);
	// printf("Str =%s=\n", str);
	// printf("--------------------------------\n");
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	size_t	str_nbr;
	size_t	count;
	char	**array;

	if (!s)
		return (0);
	str_nbr = count_strings(s, c);
	if (!(array = (char **) malloc((str_nbr + 1) * sizeof(char *))))
		return (0);
	count = 0;
	i = 0;
	while (count < str_nbr)
	{
		array[count++] = get_str(s, c, &i); //fazer função para pegar array
	}
	array[count] = 0;
	return (array);
}

// int	main(void)
// {
// 	char *str;
// 	char c;
// 	char **arr;

// 	str = "  tripouille 42 ";
// 	c = ' ';
// 	// printf("tem que vir zero mas vem = %d\n", count_strings(str, c));
// 	arr = ft_split(str, c);
// 	printf("Teste: =%s=\n", arr[0]);
// 	printf("Teste: =%s=\n", arr[1]);
// 	printf("Teste: =%s=\n", arr[2]);
// 	// printf("Teste: =%s=\n", arr[3]);
// 	return (0);
// }
