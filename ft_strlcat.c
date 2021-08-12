#include	"libft.h"
#include    "unistd.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*dst_cpy;
	char	*src_cpy;
	size_t	buff_size;
	size_t	dst_len;

	dst_cpy = dst;
	src_cpy = (char *) src;
	buff_size = size;
	while (buff_size-- != 0 && *dst_cpy != '\0')
		dst_cpy++;
	dst_len = dst_cpy - dst;
	buff_size = size - dst_len;
	if (buff_size == 0)
		return (dst_len + ft_strlen(src));
	while (*src_cpy != '\0')
	{
		if (buff_size != 1)
		{
			*dst_cpy++ = *src_cpy;
			buff_size--;
		}
		src_cpy++;
	}
	*dst_cpy = '\0';
	return (dst_len + (src_cpy - src));
}
