#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*set;

	str = "aaaaaaehoooo/ 123";
	set = "123e4a ";

	printf("errei ctz: %s\n",ft_strtrim(str, set));
	return (0);
}
