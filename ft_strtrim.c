#include "libft.h"

// static int	ft_findstart(char const *s1, char const *set)
// {
// 	int	i;
// 	int	j;
// 	int	count;
// 	int	resp;

// 	i = 0;
// 	j = 0;
// 	count = 0;
// 	resp = 0;
// 	while (s1[j])
// 	{
// 		while (set[i])
// 		{
// 			if (set[i] == s1[j])
// 			{
// 				count++;
// 				resp++;
// 			}	
// 			i++;
// 		}
// 		if (resp == 0)
// 			return (count);
// 		j++;
// 		i = 0;
// 		resp = 0;
// 	}
// 	return (count);
// }

// static int	ft_findend(char const *s1, char const *set, int	s1_len)
// {
// 	int	i;
// 	int	j;
// 	int	count;
// 	int	resp;

// 	i = 0;
// 	j = s1_len - 1;
// 	count = 0;
// 	resp = 0;
// 	while (s1[j])
// 	{
// 		while (set[i])
// 		{
// 			if (set[i] == s1[j])
// 			{
// 				count++;
// 				resp++;
// 			}	
// 			i++;
// 		}
// 		if (resp == 0)
// 			return (count);
// 		j--;
// 		i = 0;
// 		resp = 0;
// 	}
// 	return (count);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int begin;
// 	int	end;
// 	int	s1_len;
// 	char	*str;
// 	size_t	len;

// 	if (!set || !s1)
// 		return (NULL);
// 	s1_len = ft_strlen(s1);
// 	begin = ft_findstart(s1,set);
// 	end = ft_findend(s1,set,s1_len);
// 	len = s1_len - begin - end;
// 	str = ft_substr(s1 + begin, 0, len);
// 	return (str);	
// }

char* ft_strtrim(char const* s1, char const* set)
{
	size_t	front;
	size_t	rear;
	char* str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		rear = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[rear - 1] && ft_strchr(set, s1[rear - 1]) && rear > front)
			rear--;
		str = (char*)malloc(sizeof(char) * (rear - front + 1));
		if (str)
			ft_strlcpy(str, &s1[front], rear - front + 1);
	}
	return (str);
}
