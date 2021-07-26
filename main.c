#include	"libft.h"
#include	<ctype.h>
#include	<stdio.h>
#include	<string.h>


// Function test

void	test_isalpha(void)
{
	int	i;

	printf("*-----------------ft_isalpha-----------------*\n");
	i = 0;
	while (i <= 127)
	{
		if (ft_isalpha(i) != 0 && (i >= 0 && i <= 64))
			printf("KO --- c = %d --- ft_isalpha(%d) = %d | isalpha(%d) = %d\n", i, i, ft_isalpha(i), i, isalpha(i));
		if (ft_isalpha(i) == 0 && (i > 64 && i <= 90))
			printf("KO --- c = %d --- ft_isalpha(%d) = %d | isalpha(%d) = %d\n", i, i, ft_isalpha(i), i, isalpha(i));
		if (ft_isalpha(i) != 0 && (i > 90 && i <= 96))
			printf("KO --- c = %d --- ft_isalpha(%d) = %d | isalpha(%d) = %d\n", i, i, ft_isalpha(i), i, isalpha(i));
		if (ft_isalpha(i) == 0 && (i > 96 && i <= 122))
			printf("KO --- c = %d --- ft_isalpha(%d) = %d | isalpha(%d) = %d\n", i, i, ft_isalpha(i), i, isalpha(i));
		if (ft_isalpha(i) != 0 && (i > 122 && i <= 127))
			printf("KO --- c = %d --- ft_isalpha(%d) = %d | isalpha(%d) = %d\n", i, i, ft_isalpha(i), i, isalpha(i));
		i++;
	}
}

void	test_isdigit(void)
{
	int	i;

	printf("*-----------------ft_isdigit-----------------*\n");
	i = 0;
	while (i <= 127)
	{
		if (ft_isdigit(i) != 0 && (i >= 0 && i <= 47))
			printf("KO --- c = %d --- ft_isdigit(%d) = %d | isdigit(%d) = %d\n", i, i, ft_isdigit(i), i, isdigit(i));
		if (ft_isdigit(i) == 0 && (i > 47 && i <= 57))
			printf("KO --- c = %d --- ft_isdigit(%d) = %d | isdigit(%d) = %d\n", i, i, ft_isdigit(i), i, isdigit(i));
		if (ft_isdigit(i) != 0 && (i > 57 && i <= 127))
			printf("KO --- c = %d --- ft_isdigit(%d) = %d | isdigit(%d) = %d\n", i, i, ft_isdigit(i), i, isdigit(i));
		i++;
	}
}

void	test_isalnum(void)
{
	int	i;

	printf("*-----------------ft_isdigit-----------------*\n");
	i = 0;
	while (i <= 127)
	{
		if (ft_isalnum(i) != 0 && ((i >= 0 && i <= 47)
				|| (i > 57 && i <= 64)
				|| (i > 122 && i <= 127)))
		{
			printf("KO, ft_isalnum(%d) = %d ", i, ft_isalnum(i));
			printf("| isalnum(%d) = %d\n", i, isalnum(i));
		}
		if (ft_isalnum(i) == 0 && ((i > 47 && i <= 57)
				|| (i > 64 && i <= 90)
				|| (i > 96 && i <= 122)))
		{
			printf("KO, ft_isalnum(%d) = %d ", i, ft_isalnum(i));
			printf("| isalnum(%d) = %d\n", i, isalnum(i));
		}
		i++;
	}	
}

void	test_isascii(void)
{
	int	i;

	printf("*-----------------ft_isdigit-----------------*\n");
	i = 0;
	while (i <= 127)
	{
		if (ft_isascii(i) == 0)
		{
			printf("KO, ft_isascii(%d) = %d ", i, ft_isascii(i));
			printf("| isascii(%d) = %d\n", i, isascii(i));
		}
		i++;
	}
}

void	test_isprint(void)
{
	int	i;
	
	printf("*-----------------ft_isprint-----------------*\n");
	i = 0;
	while (i <= 127)
	{
		if ((ft_isprint(i) != 0 && (i < 32 || i > 126)) || (ft_isprint(i) == 0 && (i >= 32 && i <= 126)))
		{
			printf("KO, ft_isprint(%d) = %d ", i, ft_isprint(i));
			printf("| isprint(%d) = %d\n", i, isprint(i));
			return;
		}
		i++;
	}
	printf("OK.\n");
}

void	test_strlen(void)
{
	char	*ptr;
	int	a;
	int	b;

	printf("*-----------------ft_strlen------------------*\n");
	ptr = "aeho";
	a = strlen(ptr);
	b = ft_strlen(ptr);
	if (a != b)
	{
		printf("KO, ft_strlen(%s) = %d ", ptr, ft_strlen(ptr));
		printf("| strlen(%s) = %lu\n", ptr, strlen(ptr));
	}
	else
	{
		printf("OK.\n", ft_strlen(ptr));
	}
	
	
}

int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	return (0);
}
